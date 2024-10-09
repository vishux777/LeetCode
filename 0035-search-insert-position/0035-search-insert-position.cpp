class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
            else if(target>nums[i] && (i!=nums.size() -1) && (target<nums[i+1])){
                return i+1;
            }
            else if(target>nums[nums.size() -1]){
                return nums.size();
            }
            else if(target<nums[i]){
                return 0;
            }
        }
        return 1;
    }
};