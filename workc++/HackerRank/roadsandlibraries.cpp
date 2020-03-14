#include<bits/stdc++.h>

using namespace std;

int find_root(int a)
{
    return 0;
}

void quick_union(int d[],int a ,int b)
{
    int a = find_root(a);
    int b = find_root(b);
    d[b] = a;


}

int main()
{
    int n,m,cl,cr;
    cin>>n>>m>>cl>>cr;

    int adj_mat[n+1][n+1],visited[n+1];

        for(int i=1;i<=n;i++)
            for(int j=1;i<=n;j++)
                adj_mat[i][j] =0;

    int a,b;

        for(int i=0;i<m;i++)
        {
            cin>>a>>b;
            adj_mat[a][b] = 1;
            adj_mat[b][a] = 1;
        }

        if(cr>=cl) cout<<(cl*n)<<endl;

        
                    
}