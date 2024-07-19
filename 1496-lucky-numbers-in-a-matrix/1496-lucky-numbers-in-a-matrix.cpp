class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        
        vector<int>ans;
        vector<int>rowMin;
        vector<int>colMax;

        for(int i = 0; i<matrix.size(); i++){
            int minRow = INT_MAX;
            for(int j = 0; j<matrix[0].size(); j++){
                if(minRow>matrix[i][j]){
                    minRow = matrix[i][j];
                }
            }
            rowMin.push_back(minRow);
  
        }
        for(int i = 0; i<matrix[0].size(); i++){
             int maxCol = INT_MIN;
             for(int j = 0; j<matrix.size(); j++){
                if(maxCol < matrix[j][i]){
                    maxCol = matrix[j][i];
                }
             }
             colMax.push_back(maxCol);
        }

        for(int i = 0; i<rowMin.size(); i++){
            for(int j = 0; j<colMax.size(); j++){
                if(matrix[i][j] == rowMin[i] && matrix[i][j] == colMax[j]){
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        return ans;
    }
};