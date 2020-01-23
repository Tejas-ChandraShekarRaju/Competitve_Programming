#include<iostream>

using namespace std;

void print(int* temp)
{
    cout<<*temp;
    
}

int main()
{
    int n;
    cin>>n;
    int temp[n][n];
        for(int i =0 ;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            cin>>temp[i][j];
        }

    print((int*)temp);    
}