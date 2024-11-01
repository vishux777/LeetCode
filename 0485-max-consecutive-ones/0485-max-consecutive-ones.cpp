class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int num=0;
        int amx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                num++;
            }
            else{
                num=0;
            }
            if(num>amx){
                amx=num;
            }
        }
        return amx;
    }
};