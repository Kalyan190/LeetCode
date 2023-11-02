class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int maxLen = 0;
      
        for(int i = 0; i<s.size();){
            int CountOne = 0, CountZero = 0;
         while(i<s.size() && s[i] =='0'){
             CountZero++;
             i++;
         }
         while(i<s.size() && s[i] == '1'){
             CountOne++;
             i++;
         }
         int maxi = 2*min(CountZero,CountOne);
         maxLen = max(maxLen, maxi);
            
        }
        return maxLen;
    }
};