/*
***decrease and conquer****
*/

#include<iostream>

using namespace std;

void permute(string a,int l,int r);

int main()
{
    string a;
    cin>>a;
    permute(a,0,a.length()-1);
    return 0;
}

void permute(string a,int l,int r)
{
    if(l==r) cout<<a<<endl;

        for(int i =l;i<=r;i++)
        {
            std::swap(a[l],a[i]);
            permute(a,l+1,r);
            std::swap(a[l],a[i]);
        }
}