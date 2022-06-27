// we can sum up previous element and store at that index.

// Time complexity ->O(N) N-> size of array
// Space complexity ->O(1)  constant

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        return nums;
    }
};