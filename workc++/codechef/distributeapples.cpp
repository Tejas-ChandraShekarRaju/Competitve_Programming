#include <iostream>

using namespace std;

int main() {
	int test_cases;
	cin>>test_cases;
	    for(int t=0;t<test_cases;t++)
	    {
	        long long n,k;
	        cin>>n>>k;
	        long quotient = n/k;
	        double result = quotient%k;
	            if(result!=0)
	            {
	                cout<<"YES";
	            }
	            else cout<<"NO";
	    }
	return 0;
}
