#include<iostream>

using namespace std;

int count = 0;

bool checkisprime(int n){

   for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return false;
            
        }

   }
  return true;
}


void primefactors(int n,int* p){
 
      while(n%2==0){

          *p = 2;
          p++;
          count++;
          n = n/2;



      }

      


      
      
 



}

int main(){
    int n,phivalue;
    int *p;
    cout<<"Enter n";
    cin>>n;
    int primeFactors[n];
    bool isprime = checkisprime(n);
        if(isprime){ phivalue = n-1;
        cout<<phivalue;
        }
        else{
            p = primeFactors;
            primefactors(n,p);
            cout<<sizeof(primeFactors)<<endl;
                for(int i=0;i<count;i++){
                        //cout<<"ith value"<<i<<endl;
                        cout<<"primeFactors"<<primeFactors[i]<<endl;
                }
            
        }
    
         
        
        

}