#include<iostream>
#include<algorithm>
 
using namespace std;





int main(){


   int a[6][6],i;
   int max=0,sum=0;
   int step;


   for(int k=0;k<6;k++){
            for(int j=0;j<6;j++){

                 cin>>a[k][j];
                
                 
            }

           
   }
     cout<<"done";
   
   
   

   for(i=0;i<4;i++){
        sum=0;
            for(int j=step;j<step+3;j++){
                    sum+=a[i][j]+a[i+2][j];
                        if(j=step+1){
                            sum+=a[i+1][j];
                        }

            }

       
        max = std::max(sum,max);
            if(step<3){
                step++;
                i--;

            }
            else{
                step=0;
            }


    }   



    


    


}