#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    char s[100];
    char c;

    int index,count;


        while(t--)
        {
            count = 0;
            index = 0;

            cin.getline(s,100);
            int n = cin.gcount();  

                for(int i = 0;i<n;i++) 
                {
                    if(s[i] == 1)
                    {
                        index = i;
                        break;
                    }
                } 


                for(int i = index+1;i<n;i++)
                {
                        

                        if(s[i] == 1)
                        {
                            count+= (i-index-1);
                            index = i;
                        }

                }

            cout<<count<<endl;    
            

        }
}