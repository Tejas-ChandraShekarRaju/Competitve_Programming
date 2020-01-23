#include<iostream>
#include<vector>
using namespace std;


vector<int> no_of_digits(long long int num)
{
     vector<int> firstdigit_count;
     int count = 1;
        while(num>=10)
        {
            num = num/10;
            count++;

        }
     firstdigit_count.push_back(num);
     firstdigit_count.push_back(count);   
    return firstdigit_count;    
}

int main()
{
    int testCases;
    cin>>testCases;
        while(testCases--)
        {
            long long int l,r;
            cin>>l>>r;
            /*vector<int> firstDigit_count_1  = no_of_digits(l);

            vector<int> firstDigit_count_2  = no_of_digits(r);

             if(firstDigit_count_1[0]%2==1 && firstDigit_count_1 )

            */
            long long int firstDigit;
            long long int count = 0;
                for(long long int i = l;i<=r;i++)
                {
                    firstDigit = i;
                        while(firstDigit >= 10) firstDigit = firstDigit/10;
                            if(firstDigit%2 == 0) count++;
                }
               
            cout<<count<<endl;     
                
        }
}