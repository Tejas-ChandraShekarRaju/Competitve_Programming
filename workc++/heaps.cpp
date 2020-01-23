#include<iostream>

using namespace std;

void buildHeap(int array[],int n);
void heapify(int a[],int i);

int main(){
 int n;   
 cout<<"Enter n";
 cin>>n;   
 int array[n];
 cout<<"Enter array";
    for(int i=0;i<50;i++){

        cin>>array[i];

         }
    buildHeap(array,n);     
}


void buildHeap(int array[],int n){


    int startindex = (n-1)/2;//to find the last non leaf node from where i have to start heapifying
        for(int i = startindex;i>=0;i--)
                heapify(array,startindex);

}

void heapify(int a[],int i)
{
        if(a[i]<a[(i*2)+1]){
                std::swap(a[i],a[(i*2)+1]);
        }
        if(a[i]<a[(i*2)+2]){
                std::swap(a[i],a[(i*2)+2]);
        }



}