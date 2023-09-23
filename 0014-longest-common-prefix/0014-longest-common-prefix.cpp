class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(),strs.end());
        string ans = "",n=strs[0],m=strs[strs.size() - 1];
        for(int i = 0; i<n.size(); i++){
            if(n[i]==m[i])
                 ans += n[i];
            
            else{
                break;
            }
        }
        return ans;
    }
};