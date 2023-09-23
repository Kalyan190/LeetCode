class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool space = false;
        for(int i = 0; i< s.length(); i++){
            if(s[i] == ' ')
            space = true;
            else if(s[i] != ' ' && space){
                count = 1;
                space = false;

            }
            else{
                count++;
            }

        }
        return count;
    }
};