#include<iostream>

using namespace std;

int f[100];
int fibonnaci(int n);


int main()
{
    int n;
    cin>>n;
        for(int i = 0;i<100;i++)
        {
            f[i] =-1;
        }
    f[0] = 0;
    f[1] =1;
    cout<<fibonnaci(n); 
    return 0;
}   

int fibonnaci(int n)
{
     
     if(f[n]!=-1)
     {
         return f[n];
         
         cout<<"yues"<<n<<endl;
         
     }

        
    f[n] = fibonnaci(n-1) + fibonnaci(n-2);

    return f[n]; 
    
}