#include<iostream>

using namespace std;

int main()
{
    int testCases;
    cin>>testCases;
        while(testCases--)
        {
            string binary_string;
            cin>>binary_string;
            char sec_prev = binary_string[0],prev = binary_string[1];
            int count1 = 0;
            int count2 = 0;
                for(int i = 2;i<binary_string.length();i++)
                {
                        if(sec_prev=='1' && prev == '0' && binary_string[i] == '1') count1++;
                        if(sec_prev=='0' && prev == '1' && binary_string[i] == '0') count2++;
                    sec_prev = prev;
                    prev = binary_string[i];                              
                }
            cout<<max(count1,count2)<<endl;    
        }
    return 0;    
}            


