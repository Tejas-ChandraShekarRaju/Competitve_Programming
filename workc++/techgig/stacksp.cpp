#include<iostream>
#include<algorithm>

using namespace std;

int accept_stack_input(int n,int a[])
{
    int temp = 0;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        temp+= a[i];
    }

}

int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int s1[n1],s2[n2],s3[n3];
    int sum1 = accept_stack_input(n1,s1);
    int sum2 = accept_stack_input(n2,s2);
    int sum3 = accept_stack_input(n3,s3);
    int max_sum = max({sum1,sum2,sum3});
        if(n1 == 0 || n2 == 0 || n3 == 0) cout<<0<<endl;
        else if(sum1 == sum2 && sum2 == sum3) cout<<sum1<<endl;

        else 
        {
            while(true)
            {
                if(max_sum == sum1)
                {
                    int p = 0;
                    if(p<n1)
                    {
                        sum1-=s1[p];
                        p++;
                    }
                }
                else if(max_sum == sum2)
                {
                    int p = 0;
                    if(p<n2)
                    {
                        sum2-=s2[p];
                        p++;
                    }
                }
                else if(max_sum == sum3)
                {
                    int p = 0;
                    if(p<n3)
                    {
                        sum3-=s3[p];
                        p++;
                    }
                }
                 
            }
        }

        

    
}