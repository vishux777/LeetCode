class Solution {
public:
    bool detectCapitalUse(string word) {
        int a=0;
        for(int i=1;i<word.size();i++){
            if(islower(word[i])){
                a++;
            }
        }
        if(a==0 || a==word.size()-1){
            if (isupper(word[0]) || a == word.size() - 1) {
                return true;
            }
        }
        return false;
    }
};