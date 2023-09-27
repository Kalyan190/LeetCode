class Solution {
public:
    bool isvowel(string& s){
        int n = s.length() -1;
        if((s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u') && (s[n]=='a' || s[n]=='e' || s[n]=='i' || s[n]=='o' || s[n]=='u'))
        return true;

        return false;
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
       for(int i = left; i<=right; i++){
           if(isvowel(words[i]))
           count++;
       }
       return count;
    }
};