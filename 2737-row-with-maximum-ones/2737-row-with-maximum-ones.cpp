class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int max_count = 0, max_row = 0, n = mat[0].size();
        for(int i = 0; i< mat.size(); i++){
            int count = 0;
            for(int j = 0; j<n; j++){
                count += mat[i][j];
            }
            if(count > max_count){
                max_count = count;
                max_row = i;
            }
        }
        return {max_row, max_count};

    }
};