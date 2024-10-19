class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<pair<int,int>>v;
        int n = nums.size();
        int i, j ;
        for(i = 0; i<n; i++){
            for(auto j: nums[i]){
                v.push_back({j,i});
            }
        }
        sort(v.begin(),v.end());
        vector<int>ans;
        map<int,int>seen;
        int total = 0;
        int req = n;
        i = 0, j = 0;
        int sz = v.size();
        int mini = INT_MAX;
        
        while(i<sz){
            seen[v[i].second]++;
            if(seen[v[i].second] == 1){
                total++;
            }
            if(total == req){
                while(seen[v[j].second] > 1){
                    seen[v[j++].second]--;
                }
                if(v[i].first - v[j].first < mini){
                    mini = v[i].first - v[j].first;
                    ans = vector<int>{v[i].first,v[j].first};
                }
            }
            i++;
        }
        return ans;
    }
};