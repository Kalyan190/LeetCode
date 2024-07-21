class Solution {
public:
    bool doesAliceWin(string s) {
         string vowel = "aeiou";
         int count = 0;
         for(int i = 0; i<s.size(); i++){
            if(vowel.find(s[i]) != string::npos){
                count++;
            }
         }
         if(count>0){
            return true;
         }else{
            return false;
         }

    }
};