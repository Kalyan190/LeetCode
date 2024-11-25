class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int row = box.size();
        int col = box[0].size();

        vector<vector<char>>ans(col,vector<char>(row,'.'));

        for(int i = 0; i<row; i++){
            int ind = col - 1;
            for(int j = col - 1; j>=0; j--){
                if(box[i][j] == '#'){
                    ans[ind][row-i-1] = '#';
                    ind--;
                }else if(box[i][j] == '*'){
                    ans[j][row-i-1] = '*';
                    ind = j-1;
                }
            }
        }
        return ans;
    }
};