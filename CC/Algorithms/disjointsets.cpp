/*


improved from simple union to quick union and improved to weighted quick union;

weighted quick union because for my find operations if i have longer trees i will make it as long as n,
hence if i always add the shorter tree under the longer tree, I will make the tree shorter hence my find will be faster

*/

#include<bits/stdc++.h>

using namespace std;

class quick_uf
{
	private:
		 int* id;
		 int* size;

		int find_root(int i)
		{
			while(i!=id[i]) i = id[i];

			return i;
		}

	public:

		quick_uf(int n)
		{
			int a[n];
			int s[n];

				for(int i=0;i<n;i++) s[i] = 1;

			id = a;
			size = s;

		}

		/*void quick_union(int a,int b)
		{
			int x = find_root(a);
			int y = find_root(b);
			id[x] = y;
		}*/

		void weighted_quick_union(int a,int b)
		{
			int x = find_root(a);
			int y = find_root(b);

				if(x == y) return;

				if(size[x]<size[y])
				{
					id[x] = y;
					size[x]+=size[y];
				} 

				else
				{
					id[y] = x;
					size[y]+=size[x];
				}  


		}

		bool connected(int a,int b)
		{
			return find_root(a) == find_root(b);
		}


				 
};

int main()
{
	int n;
	cin>>n;

}