#include<iostream>
#include<algorithm>

using namespace std;

int minf(int a,int b){

    if(a<b){
        return a;
    }
    return b;
}

int main(){

int testCases,n,hits,i;
cin>>testCases;
    for(int t=0;t<testCases;t++){
         i =0;
         cin>>n;
         int a[n];

            for(int k=0;k<n;k++){

                cin>>a[k];
            }
        // sort(a,a+n);
         int* min = min_element(a,a+n);
         cout<<min<<endl;
         int count=0;
         hits = *min;
            for(int j=1;count<n-1;j++ ){
                
                int temp1 = a[i+j]-hits;
                int temp2 = a[i];
                hits = hits+minf(temp1,temp2);cout<<"Hits="<<hits<<endl;
                    if(temp1>temp2){
                        i++;
                        j--;
                    }
                count++;    

            }
        cout<<hits<<endl;       
        


    }

}