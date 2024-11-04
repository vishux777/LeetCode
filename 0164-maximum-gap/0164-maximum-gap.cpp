class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int max=INT_MIN;
        int val=0;
        sort(nums.begin(),nums.end());
        if(nums.size()<2){
            return 0;
        }
        for(int i= 1;i<nums.size();i++){
            val=nums[i]-nums[i-1];
            if(val>max){
                max=val;
            }
        }
        return max;
    }
};