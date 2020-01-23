#include<bits/stdc++.h>

using namespace std;

unsigned long long int facts[1000];

unsigned long long int fact(unsigned long long int n)
{
    if(n==1 || n==0) return n;

    if(facts[n]!=0) return facts[n];

    unsigned long long int result = n*fact(n-1);

    facts[n] = result;

    return facts[n];

}

int main()
{
    fill_n(facts,1000,0);
    unsigned long long int n;

    cin>>n;

    cout<<fact(n);

}
