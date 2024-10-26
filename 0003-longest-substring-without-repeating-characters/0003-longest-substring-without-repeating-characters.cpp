class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxL = 0;

        unordered_map<char,int>charmap;
        int left = 0;

        for(int right = 0; right<n; right++){
            if(charmap.count(s[right]) == 0 || charmap[s[right]] < left){
                charmap[s[right]] = right;
                maxL = max(maxL , right - left + 1);

            }
            else{
                left = charmap[s[right]] + 1;
                charmap[s[right]] = right;
            }
        }
        return maxL;
    }
};