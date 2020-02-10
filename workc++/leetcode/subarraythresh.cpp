#include<iostream>
#include<vector>

using namespace std;


int main()
{

vector<int> arr;

int n,k,threshold;

    cin>>n>>k>>threshold;

        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }

int count = 0;
        
        int sum;
        
            for(int i = 0;i<arr.size() - k;i++)
            {
               
                sum = 0;
                    for(int j = i;j<i+k;j++)
                    {
                        sum+=arr[j]; 
                    }
                    
                    if((float)(sum/k) >= (float)threshold)
                    {
                        count++;
                        
                    }
                
            }

       cout<<count;     

}            