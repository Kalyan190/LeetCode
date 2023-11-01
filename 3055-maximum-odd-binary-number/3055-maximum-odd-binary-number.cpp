class Solution {
public:
    string maximumOddBinaryNumber(string s) {
       string ans = "";
       int count = 0;
       for(int i = 0; i<s.size(); i++){
           if(s[i] == '1')
           count++;
           ans += '0';
       }
       int t = count - 1;
       for(int i = 0; i<t; i++){
           ans[i] = '1';
       }
       ans[s.size() - 1] = '1';
       return ans;
       
    }
};