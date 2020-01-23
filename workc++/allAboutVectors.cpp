#include<vector>
#include<iostream>

using namespace std; 

int main()
{
    vector<int> test;
    test.push_back(3);
    test.push_back(3);
    test.push_back(3);
    test.push_back(3);
    test.push_back(3);
    
    cout<<test.size();

     vector<vector<int> > vect{ { 1, 2 }, 
                               { 4, 5, 6 }, 
                               { 7, 8, 9, 10 } };

     cout<<vect.size();
   

}