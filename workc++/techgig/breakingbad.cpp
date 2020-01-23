#include<iostream>

#include<stack>

using namespace std;

class validString
{
    public:
        char c;
        int s;
};



int checkStatus(validString s[],int l)
{
    int status = 0;

        for(int i=0;i<l;i++)
        {
                if(s[i].c == 'b' && s[i].s == 0) return 1;
        }

    return 0;

}

int main()
{
   int testCases;
   cin>>testCases;
    while(testCases--)
    {
        int l;
        cin>>l;
        validString s[l];
            for(int i =0;i<l;i++)
            {
                cin>>s[i].c;
                s[i].s = '0';

            }

            
    

        stack<char> st;
        int again = 0;
        int trav_count = 0;

        

            for(int i=0;i<l;i++)
            {
                
                if((st.empty() || st.top()=='d') && s[i].c == 'b')
                {
                    st.push(s[i].c);
                    s[i].s = 1;
                }

                else if(st.top()=='b' && s[i].c == 'a')
                     {
                        st.push(s[i].c);
                        s[i].s = 1;
                     }

                else if(st.top()=='a' && s[i].c == 'd')
                     {
                        st.push(s[i].c);
                        s[i].s = 1;
                     }

                if(i==l-1)
                {
                    again = checkStatus(s,l);
                        if(again == 1)
                        {
                            i = 0;
                            trav_count++;
                        }

                }

                if(trav_count>1)
                {
                        if(st.top() == 'b' || st.top() == 'a') break;
                }
                    
            }

            while(!st.top() == 'd')
            {
                st.pop();
            }

            int result = l-st.size();

            cout<<result<<endl;



    }
}