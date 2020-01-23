#include<iostream>

using namespace std;

bool checkIsPalindrome(int product)
{
    int remainder;
    int temp = product;
    long number=0;
    while(product!=0)
    {
        remainder = product%10;
        number = (number*10)+remainder;
        product = product/10;
    }
    if(number == temp)
    {
        return true;
    }

    return false;
}


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int product;
        bool flag;
        int max = 0;
        cin >> n;
            for(int i = 999;i>=100;i--)
            {
                for(int j = 999;j>=100;j--)
                {
                    flag=false;
                    product = i*j;
                    if(product<n)
                    {
                        flag = checkIsPalindrome(product);
                        if(flag)
                        {
                            if(product>max)
                            {
                                max = product;
                            }
                            
                        }
                    }
                    
                    
                }
                
            }
            cout<<max<<endl;

    }
    return 0;
}
