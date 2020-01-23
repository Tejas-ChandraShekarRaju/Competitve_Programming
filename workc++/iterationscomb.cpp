#include<iostream>

using namespace std;
int HCF(int a,int b);
int LCM(int a,int b);


int main()
{
    int a,b;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;
    int Hresult = HCF(a,b);
    int Lresult = LCM(a,b);
    cout<<Hresult<<"  "<<Lresult<<endl;


}

int HCF(int a,int b)
{
    //int min = a<b?a:b;
    if(a==0||b==0)  return 0;
    int min;
    for(min = a<b?a:b;min>=1;min--)
    {
        if(a%min==0 && b%min==0)
        {
            break;
        }
    }
    return min;
}

int LCM(int a,int b)
{
    if(a==0||b==0) return 0;
    int max = (a > b) ? a : b;
    do
    {
        if (max % a == 0 && max % b == 0)
        {
            return max;
        }
        else
            ++max;
    } while (true);
    
    
       
}