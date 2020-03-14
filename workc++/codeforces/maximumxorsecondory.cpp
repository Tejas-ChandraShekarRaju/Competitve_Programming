//submitted


#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    
    int a[n];
    
        for(int i=0;i<n;i++) cin>>a[i];
        
    int max = 0;
    stack<int> s;
    s.push(a[0]);
    
        for(int i = 1;i<n;i++)
        {
                while(!s.empty())
                {
                        if(max<(s.top()^a[i])) max = s.top()^a[i];
                        
                        if(a[i]>s.top()) s.pop();
                        
                        else break;
                }

            s.push(a[i]);
        }

        
        
    cout<<max<<endl;
    
    return 0;
    
    
}