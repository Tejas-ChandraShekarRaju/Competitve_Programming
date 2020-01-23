#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int test_cases;
    cin>>test_cases;
        while(test_cases--)
        {
            int s,w1,w2,w3,sum=0;
            cin>>s>>w1>>w2>>w3;
            sum = w1+w2+w3;

                if(w1+w2 > w2+w3)
                {
                    w1 = w1^w3;
                    w3 = w3^w1;
                    w1 = w1^w3;
                }  
            
                if(sum<=s) cout<<1<<endl;

                else if(w1+w2<=s) cout<<2<<endl;

                else cout<<3<<endl;

        }
}