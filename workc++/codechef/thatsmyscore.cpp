#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int test_cases;
    cin>>test_cases;
        for(int t = 0;t<test_cases;t++)
        {
            int n;
            cin>>n;
            int scores[9];
            fill( scores, scores + 9, 0 );
            
                for(int i = 0;i<n;i++)
                {
                    int problem_number;
                    int score;
                    cin>>problem_number;
                    cin>>score;
                    if(problem_number >=1 && problem_number <=8)
                    {
                        
                        
                        if(score>scores[problem_number%10])
                        {
                            scores[problem_number%10] = score; 
                        }
                        
                        
                    }
                    
                }
                
                int sum =  0;
                for(int i = 1;i<=8;i++)
                {
                    sum+=scores[i];
                }
                cout<<sum<<endl;
        }
	return 0;
}