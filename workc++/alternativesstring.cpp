///this was my own and the best, passed all the test cases at once



#include<iostream>

using namespace std;

int main()
{
    int testCases;
    cin>>testCases;
        for(int t=0;t<testCases;t++)
        {
            int count =0;
            string str;
            cin>>str;
            char first = str[0];
                for(int i=1;i<=str.length();i++)
                {
                    if(first==str[i])
                    {
                        count++;
                    }
                    else
                    {
                        first=str[i];
                    }
                }
            cout<<count;    
        }
}