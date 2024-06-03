class Solution {
public:
    int appendCharacters(string s, string t) {
        int start = 0,end = 0;

        while(start<s.size() && end <t.size()){
            if(s[start] == t[end]){
                start++;
                end++;
            }else{
                start++;
            }
        }
        return t.size() - end;
    }
};