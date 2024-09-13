class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = queries.size();
        vector<int>ans(n,0);

        for(int i = 0; i<queries.size(); i++){
            int start = queries[i][0];
            int end = queries[i][1];
            int res = 0;
            for(int j = start; j<=end;j++){
               res ^= arr[j];
            }
            ans[i] = res;

        }
        return ans;

    }
};