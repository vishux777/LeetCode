class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a=nums.size()-1;
        for(int i=0;i<=a;i++){
            if(i==nums[i]){
                continue;
            }
            else{
                return i;
                break;
            }
        }
        return nums.size();
    }
};