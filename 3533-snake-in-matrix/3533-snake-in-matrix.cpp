class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i = 0, j = 0;
        unordered_map<string,pair<int,int>>d = {
            {"UP",{-1,0}},
            {"DOWN",{1,0}},
            {"LEFT",{0,-1}},
            {"RIGHT",{0,1}}
        };

        for(const string& c: commands){
            i += d[c].first;
            j += d[c].second;
        }

        return i*n + j;
    }
};