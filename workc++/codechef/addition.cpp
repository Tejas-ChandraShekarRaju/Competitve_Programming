#include<iostream>
#include<math.h>

using namespace std;
int add(int a,int b);

int powers[17];

long long int convert_to_binary(string a)
{
    
   long long int number = 0;
    int j=0;
        for(int i = a.size()-1;i>=0;i--)
        {
            
            if(a[i]=='1')
            {
                if(powers[j]==-1)
                {
                    int power=0;
                    power = pow(2,j);
                    powers[j] = power;
                   
                    number += power;
                }
                else
                {
                    
                    number+=powers[j];
                    
                }
                
                
            }
            j++;
        }

    return number;    
}


int main()
{
    int testCases;
    cin>>testCases;
        for(int i = 0;i<testCases;i++)
        {
            for(int i = 0;i<17;i++)
            {
                powers[i] = -1;
            }
            string a,b;
            cin>>a;
            cin>>b;
            int a1 = convert_to_binary(a);
            int b1 = convert_to_binary(b);
            cout<<add(a1,b1)<<endl;
               
            

        }
}

int  add(int a,int b)
{
    int u,v;
    int count = 0;
        while(b>0)
        {
            u = a^b;
            v = a&b;
            a = u;
            b = v*2;
            count++;

        }
        

return count;
}
    /*while B is greater than 0:
        U = A XOR B
        V = A AND B
        A = U
        B = V * 2
    return A 
       **working version**
       #include<iostream>
#include<math.h>

using namespace std;

int  add(int a,int b)
{
    int u,v;
    int count = 0;
        while(b>0)
        {
            u = a^b;
            v = a&b;
            a = u;
            b = v*2;
            count++;

        }

return count;
}

long int convert_to_binary(string a)
{
    
    long int number = 0;
    int j=0;
        for(int i = a.size()-1;i>=0;i--)
        {
            
            if(a[i]=='1')
            {
                
                number += pow(2,j);
                
            }
            j++;
        }

    return number;    
}


int main()
{
    int testCases;
    cin>>testCases;
        for(int i = 0;i<testCases;i++)
        {
            string a = "",b= "";
            cin>>a;
            cin>>b;
            int a1 = convert_to_binary(a);
            int b1 = convert_to_binary(b);
            cout<<add(a1,b1)<<endl;           
            

        }
}
 
        */