class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<100;i++){
            if(i<10){
                cout<<"a";
                if(i%t==0){
                    return i;
                }
            }
            if(i>=10){
            int a=i/10;
            int b=i%10;
            if((a*b)%t==0){
                return i;
            }
            }
        }
        return 100;
    }
};