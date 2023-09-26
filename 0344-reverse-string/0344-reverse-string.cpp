class Solution {
public:
    void reverseString(vector<char>& s) {
        // for(int i = 0; i<s.size(); i++){
        //     s[i] = s[s.size()-1-i];
        // }
        reverse(s.begin(), s.end());

    }
};