class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 0) return false;
        if (num == 0 || num == 1) return true;
        
        int i = 0;
        int j = num;
        
        while (i <= j) {
            long b = i + (j-i)/2;
            
            if (b*b == num)
                return true;
            else if (b*b < num)
                i = b+1;
            else
                j = b-1;
        }
        
        return false;
        
    }
};