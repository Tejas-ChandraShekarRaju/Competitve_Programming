#include <iostream>
using namespace std;

void permute(int n);

int main()
{
	int testCases;
	cin>>testCases;
		for(int t = 0;t<testCases;t++)
		{
			int n;
			cin>>n;
			permute(n);

		}
}

void permute(int n)
{
	if(n == 1)
    {
        cout<<n;
        return;

    }
	

    permute(n-1);
    cout<<n<<endl;
     
    return;

	
}