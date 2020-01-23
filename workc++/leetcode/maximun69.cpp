#include<iostream>
#include<math.h>

using namespace std;

class Solution {
public:
    int maximum69Number (int num) 
    {
    int newNum = 0;    
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

        if(counter == -1) return num;

        else
        {
            int place = 1;
            newNum = place*array[count-1];
            //cout<<newNum<<"out"<<endl;
            for(int i = count-2;i>=0;i--)
            {
                place*=10;
                newNum += place*array[i];
               // cout<<newNum<<"in"<<endl;
                
            }
            
            return newNum;
        }    
        
    }
};



int main()
{
    int num;
    cin>>num;
    Solution s;
    cout<<s.maximum69Number(num);
}