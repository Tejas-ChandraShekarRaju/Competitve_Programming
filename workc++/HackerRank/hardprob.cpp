
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int testCases;
    cin>>testCases;
        while(testCases--)
        {
            unsigned int n;
            cin>>n;
            int div_count = 2;
            int b = n>>1;
            if(n == 1) cout<<"No"<<endl;

            else
            {
                
            
            
                for(int i = 2;i<=b;i++)
                {
                        if(n%i == 0) div_count++;
                }
            bool isPrime = true;
 
                for(int i = 2; i <= div_count / 2; ++i)
                {
                        if(n % i == 0)
                        {
                            isPrime = false;
                            break;
                        }
                }
            if (isPrime) cout << "Yes"<<endl;
      
            else  cout << "No"<<endl;

            }
      

        }
}