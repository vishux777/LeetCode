class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if(nums[n-1] <= 0) {
            return nums[n-1]*nums[n-2]*nums[n-3];
        }
        
        int max = nums[n-1];
        if(nums[0]*nums[1] >= nums[n-2]*nums[n-3]) {
            max=max*nums[0]*nums[1];
        }
        else {
            max=max*nums[n-2]*nums[n-3];
        }
        return max;
    }
};