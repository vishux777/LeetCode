class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int a=0;
        int b=0;
        for(int i=0;i<stones.size();i++){
            for(int j=0;j<jewels.size();j++){
                if(stones[i]==jewels[j]){
                    a++;
                }
            }
        }
        return a;
    }
};