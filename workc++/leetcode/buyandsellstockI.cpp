#include<bits/stdc++.h>
class Solution {
public:
    int maxProfit(vector<int>& prices)
    {

        int max1 = 0;
        int min = INT_MAX;
        
            for(int i=0;i<prices.size();i++)
            {
                    
                    if(prices[i]<min) min = prices[i];
                
                    else max1 = max(max1,prices[i]-min);
                
            }
        
        return max1;
        
        
        
    }
};