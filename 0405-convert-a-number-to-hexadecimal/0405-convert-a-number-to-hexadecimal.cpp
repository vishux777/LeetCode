class Solution {
public:
    string toHex(int num) {
        const string decToHex = "0123456789abcdef";
        if(num==0) return "0";
        unsigned int num1 = num;
        string ans = "";
        while(num1 > 0){
            ans = decToHex[num1%16] + ans;
            num1 /= 16;
    }
    return ans;
    }
};