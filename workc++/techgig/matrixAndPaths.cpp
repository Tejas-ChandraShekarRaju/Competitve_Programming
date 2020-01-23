#include<iostream>
#include<queue>

using namespace std;

int minimum_distance(int* path_matrix,int n,int m);

class Qitem
{
    public:

    int row,column,distance;

    Qitem(int i,int j,int d)
    {
        row = i;
        column = j;
        distance = d;
    }

};

int main()
{
    
    int n,m,x,y;
    cin>>n>>m;
    int path_matrix[n][m];
        for(int i=0;i<n;i++)
        {
                for(int j =0;j<m;j++)
                {
                    cin>>path_matrix[i][j];
                }
        }

    cin>>x>>y;    
   
    path_matrix[x][y] = 3; 

    int result = minimum_distance((int*)path_matrix,n,m);   

    cout<<result; 
}

int minimum_distance(int* path_matrix,int n,int m)
{

    bool visited[n][m];
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<m;j++)
                {
                    if(*(path_matrix+(i*n)+j) == 0) visited[i][j] = true;

                    else visited[i][j] = false;
                }
        }

        

        
    queue<Qitem> q;
    Qitem source(0,0,0);
    q.push(source);
    visited[0][0] = true;
        while(!q.empty())
        {
            
            for(int i=0;i<n;i++)
            {
                for(int j =0;j<m;j++)
                {
                    cout<<visited[i][j]<<" ";
                }
                cout<<endl;
            }

            cout<<endl;
        
            Qitem p = q.front();
            q.pop();
                if(*(path_matrix+p.row*n+p.column) == 3)
                    return p.distance;

                //moving up
                if(p.row-1 >=0 && visited[p.row-1][p.column]==false)
                {
                    q.push(Qitem(p.row-1,p.column,p.distance+1));
                    visited[p.row-1][p.column] = true;
                }

                //moving down
                if(p.row+1<n && visited[p.row+1][p.column]==false)
                {
                    q.push(Qitem(p.row+1,p.column,p.distance+1));
                    visited[p.row+1][p.column] = true;
                }

                //moving left
                if(p.column-1>=0 && visited[p.row][p.column-1]==false)
                {
                    q.push(Qitem(p.row,p.column-1,p.distance+1));
                    visited[p.row][p.column-1] = true;
                }

                //moving right
                if(p.column+1 < m && visited[p.row][p.column+1]==false)
                {
                    
                    q.push(Qitem(p.row,p.column+1,p.distance+1));
                    visited[p.row][p.column+1] =true;
                    
                }



        }
    return -1;    
}