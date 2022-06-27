// count the no of non zero element and place non zero element form starting.
// and make rest of element equal to zero.

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[count++]=nums[i];
            }
        }
        while(count<nums.size()){
            nums[count++]=0;
        }
    }
};