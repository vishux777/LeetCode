class Solution {
public:
    int ab(int z){
        int r=0;
        while(z>0){
            r=r+z%10;
            z/=10;
        }
        if(r>9){
            return ab(r);
        }
        else{
            return r;
        }
    }
    int addDigits(int num) {
        if(num==0){
            return 0;
        }
        return ab(num);
    }
};