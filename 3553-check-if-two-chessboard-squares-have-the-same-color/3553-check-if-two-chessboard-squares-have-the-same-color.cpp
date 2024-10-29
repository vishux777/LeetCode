class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        if((coordinate1[0]+coordinate1[1])%2==0 && (coordinate2[0]+coordinate2[1])%2==0){
            return true;
        }
        if((coordinate1[0]+coordinate1[1])%2!=0 && (coordinate2[0]+coordinate2[1])%2!=0){
            return true;
        }

        return false;
    }
};