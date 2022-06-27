// sum of all element in array
// than tarverse array from start subtracting element value from sum and make and another sum1 which sum up element left of any index
// and check sum1==sum if true return index;

// Time complexity ->O(N) N-> size of array
// Space complexity ->O(1)


class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int sum1=0;
        for(int i=0;i<nums.size();i++){
            sum-=nums[i];
            if(sum1==sum) return i;
            sum1+=nums[i];
        }
        return -1;
    }
};