#include<iostream>

using namespace std;

int main()
{
    int testCases,n,p,sum,count;
    char person;
    cin>>testCases;
        while(testCases--)
        {
            cin>>n>>p;
            int order[n];
                for(int i=0;i<n;i++)
                {
                    cin>>person;
                    order[i] = (int)person - 96;
                    
                }
                count = 0;
                

                for(int i = 0;i<n;i++)
                {
                    sum = 0;
                        for(int j = i;j<n;j++)
                        {
                            sum+=order[j];
                            
                                if(sum==p)
                                {
                                    count++;
                                    break;
                                }

                                if(sum>p) break;
                        }

                    
                }

            cout<<count<<endl;    
        }
}