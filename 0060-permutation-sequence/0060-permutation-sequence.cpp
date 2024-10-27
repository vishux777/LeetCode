class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> nums; 
        string res;
        int fact = 1;
        for(int i=1;i<=n;i++){
            fact *= i;
            nums.push_back(i);
        }
        k = k - 1;
        fact = fact/nums.size();
        while(true){
            res += to_string(nums[k/fact]);
            nums.erase(nums.begin() + k/fact);
            if(nums.size()==0){
                return res;
            }
            k = k%fact;
            fact = fact/nums.size();
        }
        return res;
    }
};