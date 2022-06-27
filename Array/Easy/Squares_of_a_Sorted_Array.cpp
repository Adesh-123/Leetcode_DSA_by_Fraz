// low->0 first pointer 
// high-> n-1 second pointer
// than check condition and store in res vector

// Time complexity -> O(N) N->size of array
// Space complexity -> O(N) constant


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        vector<int> res(n);
        for(int i=0;i<n;i++) {
            if(abs(nums[l])>abs(nums[r])) {
                res[n-i-1]=nums[l]*nums[l];
                l++;
            } else {
                res[n-i-1]=nums[r]*nums[r];
                r--;
            }
        }
        return res;
    }
};