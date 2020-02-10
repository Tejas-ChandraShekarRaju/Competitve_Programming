#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


template<typename T>
std::vector<T> slice(std::vector<T> const &v, int m, int n)
{
    auto first = v.cbegin() + m;
    auto last = v.cbegin() + n + 1;

    std::vector<T> vec(first, last);
    return vec;
}


int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> v;
    int temp,l,r,x,k;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            v.push_back(temp);
        }

        while(q--)
        {
            cin>>l>>r>>x>>k;
            l--;
            r--;
            x--;    
            k;
            std::vector<int> v1 = slice(v, l, r);
            int s = v[x];
            sort(v1.begin(),v1.end());
            int i;
                for(i=0;i<v1.size();i++)
                {
                    if(s==v1[i]) break;
                }
                if(i+k<v1.size())
                {
                    cout<<v1[i+k]<<endl;
                }
            
            
        }    

        
        
    return 0;    
}