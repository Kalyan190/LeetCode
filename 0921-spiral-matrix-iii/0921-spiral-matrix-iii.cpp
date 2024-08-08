class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>>ans = {{rStart,cStart}};
         int dx = 0,dy = 1, temp;
        for(int i = 0; ans.size()<rows*cols; i++){
            
            for(int j = 0; j<i/2 + 1; j++){
                rStart += dx, cStart += dy;
                if(0<= rStart && rStart < rows && 0<= cStart && cStart < cols){
                  ans.push_back({rStart,cStart});
                }
                    
            }
            temp = dx, dx = dy, dy = -temp;
        }
        return ans;
    }
};