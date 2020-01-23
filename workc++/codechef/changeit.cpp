#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int testCases;
    cin>>testCases;
        while(testCases--)
        {
            int n;
            cin>>n;
            int sequence[n];
            int number_occurence[100];
            fill(number_occurence,number_occurence+100,0);


                for(int i =0;i<n;i++)
                {
                    cin>>sequence[i];
                    number_occurence[sequence[i]]++;
                    
                }
                cout<<endl;
            int *max_occurences = max_element(number_occurence,number_occurence+100); 
            cout<<n-*max_occurences<<endl;   


        }
}