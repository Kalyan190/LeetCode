class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int>ans;
        vector<pair<int, int>>s;
        
        for(int i = 0; i<mat.size(); i++){
            int count = 0;
            for(int j = 0; j<mat[i].size(); j++){
                if(mat[i][j] == 1)
                count++;
            }
            s.push_back(make_pair(count,i));
        }
         sort(s.begin(),s.end());
         for(int i = 0; i<k; i++){
             ans.push_back(s[i].second);
         }
        return ans;
    }
};