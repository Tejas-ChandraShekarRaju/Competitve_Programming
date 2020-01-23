#include <iostream>
using namespace std;

int main() {
	int testCases;
	cin>>testCases;
	    for(int t=0;t<testCases;t++)
	    {
	        int n;
	        cin>>n;
	        int prices[n];
	            for(int i=0;i<n;i++)
	            {
	                cin>>prices[i];
	            }
	            int start = 0;
	            int count = 1;
	            for(int i=5;i<n;i++)
	            {
	                    for(int j = start;j<i;j++)
	                    {
	                        if(prices[i]<prices[j])
	                        {
	                            count++;
	                            break;
	                        }
	                    }
	                    start++;
	            }
	       cout<<count;     
	    }
	return 0;
}
