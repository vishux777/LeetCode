class Solution {
public:
    bool checkRecord(string s) {
        int a=0,b=0;
        int l=0,p=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                a++;
            }
            if(a==2){
                l=1;
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='L'){
                b++;
            }
            else{
                b=0;
            }
            if(b==3){
                p=1;
            }
        }
        if(l==0 && p==0){
            return true;
        }
        return false;

    }
};