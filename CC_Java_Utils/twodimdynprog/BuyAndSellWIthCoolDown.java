package twodimdynprog;

public class BuyAndSellWIthCoolDown {

    public static void main(String[] args){

        int[] a = {1,2,3,0,2};

        int ans = Solution.maxProfit(a);
        System.out.println(ans);

    }
    
}

  class Solution {
    public static int maxProfit(int[] prices) {
        
        int n = prices.length;
        
        //create a dp array to store buy and sell transaction for each day
        int[][] dp = new int[n+2][2];
        
        
        for(int i =n-1 ;i>= 0 ;i--){
                //buy 
             dp[i][1] =Math.max(-prices[i] + dp[i+1][0] , dp[i+1][1] );
                
                //sell 
             dp[i][0] =Math.max(prices[i] + dp[i+2][1] , dp[i+1][0]);
            
        }
        
        
        return dp[0][1];
        
    }
}