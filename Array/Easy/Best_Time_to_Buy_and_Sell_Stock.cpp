// Traverse from behind and find maximum element.
// then find maximum profit by subtracting from current prices.

// Time complexity- O(N) N->size of array
// Space complexity- O(1) constant

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxele=INT_MIN;
        int ans=0;
        for(int i=n-1;i>=0;i--){
            maxele=max(maxele,prices[i]);
            ans=max(ans,maxele-prices[i]);
        }
        return ans;
    }
};