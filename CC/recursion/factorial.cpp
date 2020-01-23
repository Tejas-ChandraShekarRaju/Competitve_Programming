#include<iostream>

using namespace std;

int factorial(int n);

int main()
{
    int n = 5;
    cout<<factorial(5);
}

int factorial(int n)
{
    if(n==0)
        return 1;

    return n*factorial(n-1);       

         
}