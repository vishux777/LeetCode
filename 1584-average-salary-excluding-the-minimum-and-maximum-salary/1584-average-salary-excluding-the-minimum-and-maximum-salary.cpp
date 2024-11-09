class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double a=0;
        int b=0;
        for(int i=1;i<salary.size()-1;i++){
            a=a+salary[i];
            b++;
        }
        return a/b;
    }
};