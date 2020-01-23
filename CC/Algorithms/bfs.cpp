#include<iostream>


using namespace std;

int* bfs(int* matrix,int n);

// *(matrix+i*n+j);

int main()
{
    int n;
    cin>>n;
    int adjacency_matrix[n][n];
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                cin>>adjacency_matrix[i][j];    
            }
            
        }
   int* path =  bfs((int*)adjacency_matrix,n);    

    //for(int i = 0;path[])


}

int* bfs(int* matrix,int n)
{
    int head = 0,tail=0,queue_size = 0,parent[n],queue[n],visited[n],current_node;
    fill_n(visited,n,0);
    visited[0] = 1;
    cout<<endl;    
    current_node = 0;
    queue_size++;
    queue[tail] = current_node;
    tail++;
    parent[current_node] = current_node;
        while(queue_size!=0)
        {
           // cout<<queue_size<<" queue_size" <<endl;
            current_node = queue[head++];
            cout<<current_node<<" ";
            queue_size--;
                for(int i =0;i<n;i++)
                {
                        if(*(matrix+current_node*n+i) == 1 && visited[i]==0)
                        {
                            visited[i] = 1;
                            queue[tail++] = i;
                            parent[i] = current_node;
                            queue_size++;

                        }
                }
        }



    

       for(int i =0 ;i<n;i++)
        {
            cout<<parent[i]<<" ";
        } 
        cout<<endl;

        for(int i =0 ;i<n;i++)
        {
            cout<<queue[i]<<" ";
        } 
        cout<<endl;

        cout<<head<<" "<<tail;
    return parent;    

        

    
}