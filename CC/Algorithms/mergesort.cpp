#include<iostream>

using namespace std;


void merge_sort(int array[],int start,int end);

void merge(int left[],int right[]);

int main()
{
    int n;
    cin>>n;

    int array[n];
        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }
    merge_sort(array,0,n-1);
        for(int i=0;i<n;i++)
        {
            cout<<array[i];
        }    

}

void merge_sort(int array[],int start,int end)
{
    int mid = (start+end)/2;
    int left[mid+1]; //left part of the array
        for(int i=start;i<=mid;i++) left[i] = array[i];

    int right[mid+1]; //right part of the array
        for(int i=mid+1;i<=end;i++) right[i] = array[i];

    merge_sort(left,start,mid);
    merge_sort(right,mid+1,end);

    merge(left,right);
}

void merge(int left[],int right[])
{
    
}