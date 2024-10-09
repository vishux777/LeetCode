class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int h=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j] &&i!=j){
                    h=1;
                }
            }
            if(h==0){
                return nums[i];
            }
        }
        return 0;
    }
};