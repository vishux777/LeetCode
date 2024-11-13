class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> a(nums.size(),1);
        for(int i=0;i<nums.size();i++){
            a[i]=nums[i]*nums[i];
        }
        sort(a.begin(),a.end());
        return a;
    }
};