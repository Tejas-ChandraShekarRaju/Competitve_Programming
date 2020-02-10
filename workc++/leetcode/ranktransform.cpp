#include<bits/stdc++.h>

using namespace std;

/*class Vitem
{
    public:
        int value;
        int pos;

        Vitem(int value,int pos)
        {
            this->value = value;
            this->pos = pos;
        }   
};

*/

vector<int> arrayRankTransform(vector<int>& arr,vector<int>& arr1) 
{

    vector<int> rank;
    sort(arr1.begin(),arr1.end());
    unique(arr1.begin(),arr1.end());

    vector<int>::iterator it;

        for(int i=0;i<arr.size();i++)
        {
            it = find(arr1.begin(),arr1.end(),arr[i]);
            rank.push_back(it-arr1.begin()+1);

        }

    return rank;    
   


        
        
}

int main()
{
    vector<int> v,v1;
    int n;
    cin>>n;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            v.push_back(temp);
            v1.push_back(temp);
        }

    v1 = arrayRankTransform(v,v1);  

        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        } 

}