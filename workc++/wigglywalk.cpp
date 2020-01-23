#include<iostream>

using namespace std;

int main()
{
    int testCases,n,nRows,nColumns,sRow,sColumn;
    string instructions;
    cin>>testCases;
        for(int t=0;t<testCases;t++)
        {
            cin>>n>>nRows>>nColumns>>sRow>>sColumn;
            cin>>instructions;
            bool track[nRows][nColumns];
            std::fill( &track[0][0], &track[0][0] + sizeof(track), false );
            
           /* for(int i=0;i<nRows;i++)
            {
                for(int j=0;j<nColumns;j++)
                {
                    cout<<track[i][j]<<" ";
                }
                cout<<endl;
            }*/
            int i,j;
            i=sRow-1;
            j=sColumn-1;
            track[i][j] = true;

            
                for(int k=0;instructions[k];k++)
                {
                    if(instructions[k]=='E')
                    {
                        while(track[i][j])
                        j++;
                    }
                    else if(instructions[k]=='W')
                    {
                        while(track[i][j])
                        j--;
                    }
                    else if(instructions[k]=='N')
                    {
                        while(track[i][j])
                        i--;
                    }
                    else if(instructions[k]=='S')
                    {
                        while(track[i][j])
                        i++;
                    }
                    
                    track[i][j]=true; 
                    //cout<<i<<" "<<j<<endl;
                    
                }
           /* for(int i=0;i<nRows;i++)
            {
                for(int j=0;j<nColumns;j++)
                {
                    cout<<track[i][j]<<" ";
                }
                cout<<endl;
            } */   
            cout<<"Case#"<<t+1<<":"<<" "<<i+1<<" "<<j+1<<endl;    
        }
    
}