class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<vector<int>>a;
        for(auto &i: intervals){
            a.push_back({i[0],1});
            a.push_back({i[1] + 1,-1});
        }
        int ans = 0, curr = 0;
        sort(a.begin(),a.end());

        for(auto & i: a){
            ans = max(ans,curr += i[1]);
        }
        return ans;
    }
};