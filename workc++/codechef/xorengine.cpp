#include <bits/stdc++.h>
using namespace std;

class value
{
    public:
        string type;
        int r;

    value();
    value(string s,int i)
    {
        type = s;
        r = i;
    }    

    

};

int no_of_set_bits(int n)
{
    value v;

    int count = 0;
        while(n>0)
        {
            count+= (n&1);
            n = n>>1;
        }
        
        if(count&1==1) return 3;    
    
    return 2;

}

int main()
{
    ios_base::sync_with_stdio(false);
    int testCases;
    cin>>testCases;
    
        while(testCases--)
        {
            int q,p,n;
            cin>>n>>q;
            int a[n];

                for(int i=0;i<n;i++) cin>>a[i];
            
                for(int j=0;j<q;j++)
                {
                    cin>>p;
                    map<int,int> memo;
                    
                        for(int i=0;i<n;i++)
                        {
                            auto itr = memo.find(a[i]);
                                
                                if(itr == memo.end())
                                {
                                    int x = a[i]^p;
                                    int ns = no_of_set_bits(x);
                                    memo.insert(pair<int,value>(a[i],value()));
                                    
                                }

                                else 
                                {
                                    if(itr->second & 1 == 1) itr->second += 3;

                                    else itr->second +=2;
                                }
                            
                        }
                        
                    int odd=0,even=0;
                    
                        for(auto itr = memo.begin();itr!=memo.end();itr++)
                        {
                            cout<<itr->first<<" "<<itr->second<<endl;
                            if(itr->second&1 == 1) odd += itr->second/3;
                            
                            else even += itr->second/2;
                        }
                    cout<<even<<" "<<odd<<endl; 
                       
                    
                }
            
            
            
        }
    
    return 0;
}