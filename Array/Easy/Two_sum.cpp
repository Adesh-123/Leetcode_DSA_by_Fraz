// sort the array  and use two pointer approach to solve the question 

// Time complexity- O(NlogN) N->size of array 
// Space complexity- O(1) constant

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>copy=nums;
        sort(nums.begin(),nums.end()); //sort the array
        int low=0;
        int high=nums.size()-1;
        vector<int> ans;
        int first,second;
        while(low<high){
            int sum = nums[low]+nums[high];
            if(sum==target){
                 first=nums[low];
                 second=nums[high];
                 break;
            }
            else if(sum>target){
                high--;
            }
            else low++;
        }
        for(int i=0;i<copy.size();i++){
            if(first==copy[i] or second==copy[i]) ans.push_back(i);
        }
        return ans;
    }
};