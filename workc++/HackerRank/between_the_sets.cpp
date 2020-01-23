#include<iostream>
#include<algorithm>
using namespace std;

long int LCM(int a[],int n);
long int LCM(long int a,long int b);
long int GCD(long int a,long int b);
long int GCD(int a[],int n);

/*

****optimized hackerrank submission version*****        

long int GCD(long int a,long int b)
{
    if(b==0) return a;

    return GCD(b,a%b);
}

int getTotalX(vector<int> a, vector<int> b) {

  int count = 0;
  long int lcm = 1;
  long int gcd = 0;
        for(int i = 0;i<a.size();i++)
        {
            lcm = (lcm*a[i]/GCD(lcm,a[i]));
        }
        for(int i = 0;i<b.size();i++)
        {
            gcd = GCD(gcd,b[i]); 
        }

      for(long int i = lcm;i<=gcd;i++)
        {
                if(i%lcm == 0 && gcd%i ==0 ) count ++;
        }
  return count;      



}


 */
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];

        }
    int count = 0;    
    long int lcm = LCM(a,n);
    cout<<"lcm"<<lcm<<endl;
    long int hcf = GCD(b,m);
    cout<<"gcd"<<hcf<<endl;
        for(long int i = lcm;i<=hcf;i++)
        {
            if(i%lcm == 0 && hcf%i ==0 ) count ++;
        }
    cout<<count;    

   
    
    return 0; 
    
}

long int LCM(int a[],int n)
{
    //int* max; 
    //max = max_element(a, a + n); 
    long int lcm = 1;
        for(int i =0;i<n;i++)
        {
            lcm = LCM(lcm,a[i]);
            cout<<"lcm"<<i<<lcm<<endl;
        } 


   return lcm; 
}

long int LCM(long int a,long int b)
{
    //a*b = lcm*gcd

    long int lcm = (a*b)/GCD(a,b);

    return lcm;
}

long int GCD(int a[],int n)
{
     long int gcd = 0;
        for(int i =0;i<n;i++)
        {
            gcd = GCD(gcd,a[i]);

            
        } 
   return gcd; 
}

long int GCD(long int a,long int b)
{
    if(b==0) return a;

    return GCD(b,a%b);
}


