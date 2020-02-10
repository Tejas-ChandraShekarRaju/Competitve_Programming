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
            int a[n],b[n];

                for(int i=0;i<n;i++) cin>>a[i];

                for(int i=0;i<n;i++) cin>>b[i];

            sort(a,a+n);
            sort(b,b+n);

            int sum = 0;

                for(int i=0;i<n;i++)
                {
                        if(a[i]<b[i]) sum+=a[i];

                        else sum+=b[i];
                }

            cout<<sum<<endl;    


        }
}