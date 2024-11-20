class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result(2, 0);
        vector<int> count(nums.size() + 1, 0);
        for (int num : nums) {
            count[num]++;
        }
        for (int i = 1; i <= nums.size(); i++) {
            if (count[i] == 2) {
                result[0] = i;
            } else if (count[i] == 0) {
                result[1] = i;
            }
        }
        return result;
    }
};