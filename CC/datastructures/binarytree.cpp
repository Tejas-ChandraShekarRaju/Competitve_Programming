#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string words[n];
        for(int i = 0;i<n;i++)
        {
            cin>>words[i];
        }
        for(int i=0;i<n;i++)
        {
            int word_length = words[i].length();
                if(word_length > 10)
                {
                    
                    cout<<words[i].at(0)<<word_length-2<<words[i].at(word_length-1)<<endl;
                }
                else cout<<words[i]<<endl;
        }
    return 0;    
}