class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long neg_count = 0, ans = 0, size = matrix.size(), mini = INT_MAX;
        for(int i = 0; i<size; i++){
            for(int j = 0; j<size; j++){
                ans += abs(matrix[i][j]);
                if(matrix[i][j] < 0)
                neg_count++;
                mini = mini < abs(matrix[i][j]) ? mini: abs(matrix[i][j]);
            }

        }
        if(neg_count % 2 == 0){
            return ans;
        }else{
            return ans - 2*mini;
        }
    }
};