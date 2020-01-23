#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int num;
    cin>>num;

    int count = log10(num)+1;
    int counter = -1;
    int array[count];
        for(int i = count;i>0;i--)
        {
            int digit = num/(int)(pow(10,i-1))%10;
                if(digit == 6 && counter == -1) 
                {
                    array[count-i] = 9;
                    counter = 1;
                    continue;
                }
                else
                {
                    array[count-i] = digit;
                }   
        
        }

        if(counter == -1) cout<<num;

        else
        {
            for(int i = 0;i<count;i++)
            {
                cout<<array[i];
            }
        }    
        

       

}