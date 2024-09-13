class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        // int n = queries.size();
        // vector<int>ans(n,0);

        // for(int i = 0; i<queries.size(); i++){
        //     int start = queries[i][0];
        //     int end = queries[i][1];
        //     int res = 0;
        //     for(int j = start; j<=end;j++){
        //        res ^= arr[j];
        //     }
        //     ans[i] = res;

        // }
        // return ans;

        // optimise method 

        int n = arr.size();
        vector<int>pre(n);
        pre[0] = arr[0];

        for(int i = 1; i<n; i++){
            pre[i] = pre[i-1]^arr[i];
        }
        int q = queries.size();
        vector<int>res(q);

        for(int i = 0; i<q; i++){
            int s = queries[i][0];
            int e = queries[i][1];
            if(s == 0){
                res[i] = pre[e];
            }else{
                res[i] = pre[e]^pre[s-1];
            }

        }
        return res;

    }
};