#include<iostream>

using namespace std;

int fibonacci(int n);
int rsum(int n);
int factorial(int n);

int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int result = fibonacci(n);
    int sum = rsum(n);
    int fact = factorial(n);
    cout<<result<<endl;
    cout<<sum<<endl;
    cout<<fact<<endl;
}

int fibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }

    return fibonacci(n-1)+fibonacci(n-2);
}

int rsum(int n)
{
    if(n<=1) return n;

    return n+rsum(n-1);

}

int factorial(int n)
{
    if(n<=1) return 1;

    return n*factorial(n-1);
}