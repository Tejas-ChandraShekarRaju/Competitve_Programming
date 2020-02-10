#include<iostream>

using namespace std;



/*

Best case Time Complexity is O(n)
worst case Time Complexity is O(n^2)

if array gets sorted in say K iterations and K is not close to n the Time Complexity will still be O(n)n



*/
void bubble_sort(int a[],int n)
{
    int swapped,i,j;
    
        for(int i=0;i<n;i++)
        {
            swapped = 0;

                for(int j=0;j<n-i-1;j++)
                {
                        if(a[j] > a[j+1])
                        {
                            int temp = a[j];
                            a[j] = a[j+1];
                            a[j+1] = temp;

                            swapped = 1;
                        }
                }

                if(swapped == 0) break;    
        }


}