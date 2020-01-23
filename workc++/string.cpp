#include<iostream>

using namespace std;

#define NO_OF_CHARS 256


char fsl(string str){
  
  int count[NO_OF_CHARS] = {0};

  for(int i = 0;str[i];i++){
      (count[str[i]])++;
  }
    //int first=0,second=0;
  /* for(int i=0;i<n;i++){
       if(count[i]>first){
            first = count[i];
            second = first;
           

       }
       else if(count[i]>second && count[i]!=first ){
           second = count[i];
       }-----this is for nnumbers----
       */

      int first=0,second=0;
      for(int i =0;i<NO_OF_CHARS;i++){

         if(count[i]>count[first]){

             
             second = first;
             first = i;

         }
      

         else if(count[i]>count[second] && count[i] != count[first]){

                    second = i;

         }

        
      }   
      // for(int j=0;j<256;j++){
        //   cout<<count[j];
       //}
     cout<<first<<second;
       
  

      
    return second;



   }

int main(){
   //int count[NO_OF_CHARS] = {0};
   string str;
   cout<<"Enter the string"<<endl;
   cin>>str;
   char resultSecLarge = fsl(str);
   cout<<resultSecLarge<<endl;
   
}