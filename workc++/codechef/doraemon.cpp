#include<iostream>

using namespace std;

bool check_palindrome(int temp1[],int temp2[])
{
    
}

void check_conditions(int n,int m,int seq_length,int i,int j,int *matrix)
{
    int n2 = n;
    int start_index = i - (seq_length/2);
    int end_index = i + (seq_length/2);

    //cout<<i<<j<<start_index<<end_index<<seq_length<<endl;


     for(int k = start_index;k<seq_length/2;k++)
	 {
         cout<<(*((matrix+k*m)+i))<<"  "<<(*((matrix+end_index*m)+i))<<endl;
         if((*((matrix+k*m)+i)) == (*((matrix+end_index*m)+i)));
         {
             cout<<"true";
         }
         end_index--;

		

       // cout<<*((matrix+k*m)+i)<<endl;
	 }

     
        

}

int main()
{
    int testCases;
    cin>>testCases;
        while(testCases--)
        {
            int n,m;
            cin>>n>>m;
            int pair_count = n*m;
            int max_sequencelength;
                if(n<m) max_sequencelength = n;
                else max_sequencelength = m;
            int matrix[n][m];
                for(int i = 0;i<n;i++)
                {
                    for(int j = 0;j<m;j++)
                    {
                        cin>>matrix[i][j];
                    }
                }
            int max_sequencelength_at_current_index = 1; 
            int middle = n/2;
            int adder = 2;
            
                for(int i = 1;i<n-1;i++)
                {
                   // cout<<"hello";
                        if(i>n/2) adder = -2; 
                    max_sequencelength_at_current_index = i+adder;
                    cout<<max_sequencelength_at_current_index<<endl;
                        if(max_sequencelength<max_sequencelength_at_current_index) max_sequencelength_at_current_index = max_sequencelength;
                        for(int j = 1;j<m-1;j++)
                        {
                          //  cout<<"hello";
                                for(int k = 3;k<=max_sequencelength_at_current_index;k+=2)
                                {
                                   // cout<<"hello"<<endl;
                                    check_conditions(n,m,k,i,j,(int*)matrix); 
                                    //pair_count++;

                                }
                        }
                }   
        }   
}