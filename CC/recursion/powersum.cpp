#include <cmath>
#include <iostream>
using namespace std;

//int count = 0;

int totnum(int X,int N,int num,int level){
    cout<<"call"<<level++<<"("<<X<<","<<N<<","<<num<<")"<<endl;
    if(pow(num,N)<X)
    {
        int x= totnum(X,N,num+1,level)+totnum(X-pow(num,N),N,num+1,level);
        cout<<"Returning"<<level<<", "<<x<<endl;
        return x;
    }
        
    else if(pow(num,N)==X)
    {
       // cout<<"one";
        return 1;
    }
        
    else {
        //cout<<"zero";
        return 0;
    }
}

int main() {
    int X,N;
    cin>>X>>N;
    cout<<totnum(X,N,1,0);
    return 0;
}