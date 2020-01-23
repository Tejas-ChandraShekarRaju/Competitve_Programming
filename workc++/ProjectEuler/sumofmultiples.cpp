#include<iostream>

using namespace std;

long EulerSumofMultiples(long a,long b);
//long LCM(long a,long b);

int main()
{
    int testCases;
    cin>>testCases;
        for(int t=0;t<testCases;t++)
        {
            long n;
            cin>>n;
            //cout<<EulerSumofMultiples(3,n-1)<<" "<<EulerSumofMultiples(5,n-1)<<" "<<EulerSumofMultiples(15,n-1)<<" "<<endl;
            long sum = EulerSumofMultiples(3,n-1)+EulerSumofMultiples(5,n-1)-EulerSumofMultiples(15,n-1);
            cout<<sum<<endl;

        }
}

long EulerSumofMultiples(long a,long b)
{
    return (a*(b/a)*((b/a)+1))/2;
}

/*long LCM(long a,long b)
{
    if(a==0||b==0) return 0;
    long max = (a > b) ? a : b;
    do
    {
        if (max % a == 0 && max % b == 0)
        {
            return max;
        }
        else
            ++max;
    } while (true);  
}*/