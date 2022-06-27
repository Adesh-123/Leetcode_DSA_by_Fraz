// solve using recursion 
/*
             [7 , 1 , 5 , 3 , 6 , 4]
            /  \not do anythings
          buy
           | 
  sell [1,5,3,6,4]  
         /     \ 
profit=-7+1+   sell[5,3,6,4]
         |       
        buy
         |
       [5,3,6,4]        



at at index we have if we have to buy the stock so we have two option 
  first -> buy the stock at that index price subtract price[index]  subtracting because we are investing are money at that point
  second -> leave that index at move further to buy on another index  

if we have to sell the stock so
  first -> sell the stock at that index and add price[index].
  second -> leace that index at move futher to sell the stock. 

for decreasing time complexity we can use dynamic programming because there is overlapping subproblem
we can 2D dp. Threre is two changing parameter index and buy and sell  

*/

// Time complexity -> O(N^2)
// Space complexity ->O(N^2)+O(N) stack space used in recursion

class Solution {
public:
    int solver(int i,int buy,vector<int> &prices,vector<vector<int>> &dp){
        if(i==prices.size()) return 0;
        
        if(dp[i][buy]!=-1) return dp[i][buy];
        int profit;
        if(buy){
            profit=max(-prices[i]+solver(i+1,0,prices,dp),solver(i+1,1,prices,dp));
        }
        else{
            profit=max(prices[i]+solver(i+1,1,prices,dp),solver(i+1,0,prices,dp));
        }
         return dp[i][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return solver(0,1,prices,dp);
    }
};