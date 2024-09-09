class Solution {
public:
    bool isPalindrome(int num) {
        long long int digit=0,rev=0,c=0;
        int d=num;
        while(num!=0){
            digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
        }
        if(d<0){
            return false;
        }
        else if(rev==d){
            return true;
        }
        else{
            return false;
        }
    }

};