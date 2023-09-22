class Solution {
public:
    int minimizedStringLength(string s) {
        int count = 0;
        sort(s.begin(),s.end());
        for(int i = 0; i<s.size(); i++){
            if(s[i] != s[i+1])
            count++;
        }
        return count;
    }
};