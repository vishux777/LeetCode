class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> a(nums.size(),1);
        int b=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                a[b]=nums[i];
                b++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                a[b]=nums[i];
                b++;
            }
        }
        return a;
    }
};