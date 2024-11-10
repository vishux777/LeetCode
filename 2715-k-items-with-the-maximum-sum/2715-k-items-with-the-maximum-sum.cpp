class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int a=0;
        if(numOnes>=k){
            return k;
        }
        if(numOnes+numZeros>=k){
            return numOnes;
        }
        else{
            a=k-numOnes-numZeros;
            return numOnes-a;
        }
    }
};