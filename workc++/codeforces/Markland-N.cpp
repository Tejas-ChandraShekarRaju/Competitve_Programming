#include<iostream>


using namespace std;

int main()
{
    int testCases;
    cin>>testCases;
        while(testCases--)
        {
            int n,s,k;
            cin>>n>>s>>k;
            int rest[n];
            fill_n(rest,n,1);
            int t = 0;
        
                for(int i=0;i<k;i++)
                {
                      
                    cin>>t;
                    t = t-1;
                    rest[t] =rest[t]-1;      
                }


            bool found =false;
            s = s-1;
            int left = s-1;
            int right = s+1;

                while(!found)
                {
                        if(left>=0 && rest[left] == 1)  found = true;

                        if(right<n && rest[right] == 1) found = true;

                        right++;
                        left--;
                    

                }    

            int result = min(abs(left-s),abs(s-right));

            cout<<result-1<<endl;    




        }
    return 0;    
}