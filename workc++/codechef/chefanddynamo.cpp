#include<iostream>
#include<math.h>

using namespace std;

unsigned long long generate_remaining(int n)
{
    
    unsigned long long h = pow(10,n)-1;
    unsigned long long remainder = 2+(h<<1);

    return remainder;
}

int main()
{
    int testCases;
    cin>>testCases;
        while(testCases--)
        {
            int n,result;
            unsigned long long a,b,c,d,e,s,d_plus_e;
            cin>>n;
            cin>>a;
            unsigned long long remainder = generate_remaining(n);
            s = a+remainder;
            d_plus_e = remainder>>1;
            cout<<s<<std::flush;
            cout<<endl;
            cin>>b;
            s-=b;
            s-=a;
            c = s - d_plus_e;
            s-=c;
            cout<<c<<std::flush;
            cout<<endl;
            cin>>d;
            e = s - d;
            cout<<e<<std::flush;
            cout<<endl;
            cin>>result;
                if(result == -1) break;

        }
    return 0;    
}