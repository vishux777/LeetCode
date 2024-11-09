class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> b=nums;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]*2>nums[nums.size()-1]){
                return -1;
            }

        }
        for(int i=0;i<nums.size();i++){
            if(b[i]==nums[nums.size()-1]){
                return i;
            }
        }
        return 0;
    }
};