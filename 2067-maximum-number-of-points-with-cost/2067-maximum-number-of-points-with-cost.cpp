class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        // long ans = 0;
        // vector<int>ind;
        // for(int i = 0; i<points.size(); i++){
        //     int temp = -1;
        //     int index = -1;
        //     for(int j = 0; j<points[0].size(); j++){
        //          if(temp < points[i][j]){
        //             temp = points[i][j];
        //             index = j;
        //          }

        //     }
        //     ans += temp;
        //     ind.push_back(index);

        // }
        // int res = 0;
        // for(int i = 0; i<ind.size()-1; i++){
        //     res += (abs(ind[i] - ind[i+1]));
        // }
        // ans = ans - res;

        // return ans;

        // another method
        long long m = points.size(), n = points[0].size();
        vector<long long>prev(n);

        for(int i = 0; i<n; i++) prev[i] = points[0][i];
        for(int i = 0; i<m-1; i++){
            vector<long long>left(n,0),right(n,0),cur(n,0);
            left[0] = prev[0];
            right[n-1] = prev[n-1];
            for(int j = 1; j<n; j++){
                left[j] = max(left[j-1] - 1, prev[j]);
            }
            for(int j = n-2; j>=0; j--){
                right[j] = max(right[j+1]-1,prev[j]);
            }
            for(int j = 0; j<n; j++){
                cur[j] = points[i+1][j] + max(left[j],right[j]);
            }
            prev = cur;
        }
        long long ans = 0;
        for(int i = 0; i<n; i++){
            ans = max(ans,prev[i]);
        }
        return ans;
    }
};