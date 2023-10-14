class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int, int> prefix,suffix;
        for(auto x: nums){
            suffix[x]++;
        }
        for(auto y: nums){
            prefix[y]++;
            if(--suffix[y] == 0){
                suffix.erase(y);
            }
            ans.push_back(prefix.size() - suffix.size());
        }
        return ans;
    }
};