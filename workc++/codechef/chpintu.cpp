#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCases;
    cin>>testCases;
    
        while(testCases--)
        {
            int n,m,temp=0;
            int fruits_cost[51],fruits_type[51];
            
            fill(fruits_cost,fruits_cost+51,0);
            cin>>n>>m;
            
                for(int i=0;i<n;i++)
                {
                    cin>>fruits_type[i];
                }
                
                for(int i=0;i<n;i++)
                {
                     cin>>temp;
                     fruits_cost[fruits_type[i]]+=temp;
                     
                }

                
                int min = INT_MAX;
                
                for(int i=1;i<=m;i++)
                {
                        if(fruits_cost[i]>0 && fruits_cost[i]<min)
                        {
                            min = fruits_cost[i];
                            
                        }
                    
                }

               
                
                cout<<min<<endl;
                
                
        }
	
	
	return 0;
}
