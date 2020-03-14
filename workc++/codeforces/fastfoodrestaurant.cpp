#include<iostream>

using namespace std;

int main()
{
    int testCases;

    int a,b,c,sum = 0;

    cin>>testCases;

        while(testCases--)
        {
            cin>>a>>b>>c;

            sum = 0;

                if(a>0)
                {
                    sum+=1;
                    a--;
                } 
                if(b>0)
                {
                    sum+=1;
                    b--;
                } 

                if(c>0)
                {
                    sum+=1;
                    c--;
                } 

                if(a>0 && b>0) 
                {
                    sum+=1;
                    a--;
                    b--;
                }

                if(c>0 && b>0) 
                {
                    sum+=1;
                    c--;
                    b--;
                }

                if(a>0 && c>0) 
                {
                    sum+=1;
                    a--;
                    c--;
                }

                if(a>0 && b>0 && c>0) 
                {
                    sum+=1;
                    a--;
                    b--;
                    c--;
                }

            cout<<sum;    
                

        }
}