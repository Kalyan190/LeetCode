class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_map<string,int>mp;
        for(auto i: obstacles){
            string key = to_string(i[0]) + "+" + to_string(i[1]);
            mp[key]++;
        }
        vector<vector<int>>direction = {{-1,0},{0,1},{1,0},{0,-1}};
        int dir = 1;
        int x = 0, y = 0,maxDist = 0;

        for(int i: commands){
            if(i == -2){
                if(dir == 0) dir = 3;
                else dir--;
            }else if(i == -1){
                dir = (dir + 1)%4;
            }else{
                int k = i;
                for(int i = 1; i<=k; i++){
                    int newX = x + direction[dir][0];
                    int newY = y + direction[dir][1];

                    string key = to_string(newX) + "+" + to_string(newY);
                    if(mp.find(key) != mp.end()){
                        break;
                    }
                    x = newX, y = newY;
                    maxDist = max(maxDist, x*x + y*y);
                }
            }
        } 
        return maxDist;
    }
};