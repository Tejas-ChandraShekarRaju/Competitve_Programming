#include<iostream>

using namespace std;


class heap
{
    private:

        int heap_size;
        int* heap_items;

       
    public:

         heap(int* a,int size)
        {
            
            heap_items = new int[size];

                for(int i=0;i<size;i++)
                {
                    heap_items[i] = a[i];
                }
            heap_size = size; 

               

            build_max_heap();

        }


        void swap(int a,int b)
        {
            int temp = heap_items[a];
            heap_items[a] = heap_items[b];
            heap_items[b] = temp;


        }


        void heap_sort()
        {
            int aux_heap_size = heap_size-1;
            int count = heap_size - 1;

                

                 while(count--) 
                 {
                     
                     swap(0,aux_heap_size);
                     max_heapify(0,aux_heap_size);
                     aux_heap_size--;  
                     
                 }
            print_heap();
            build_max_heap();     
         }       


        void build_max_heap()
        {
            int n = heap_size/2;

            
            
                for(int i = n-1;i>=0;i--)
                {
                    
                    
                    max_heapify(i);
                }
             
                
        }

        void max_heapify(int parent,int m_size)
        {
            
            
            int left = (parent<<1)+1;
            int right = (parent<<1)+2;

            int largest = parent;

                if(left<m_size && heap_items[parent] < heap_items[left]) largest = left;

                if(right<m_size && heap_items[largest] < heap_items[right])  largest = right;   
                    
                if(largest != parent)
                {
                    swap(parent,largest);
                    
                    max_heapify(largest,m_size);
                }
        }

        void max_heapify(int parent)
        {
            
            
            int left = (parent<<1)+1;
            int right = (parent<<1)+2;

            int largest = parent;

                if(left<heap_size && heap_items[parent] < heap_items[left]) largest = left;

                if(right<heap_size && heap_items[largest] < heap_items[right])  largest = right;   
                    
                if(largest != parent)
                {
                    swap(parent,largest);
                    
                    max_heapify(largest);
                }
        }

       


        void print_heap()
        {
                for(int i=0;i<heap_size;i++)
                {
                    cout<<heap_items[i]<<" ";
                }
            cout<<endl;
        }   

};

int main()
{
    int n;
    cin>>n;
    int a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    heap h(a,n);  
    h.heap_sort();
  
 return 0;

}
