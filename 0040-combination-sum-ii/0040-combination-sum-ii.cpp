class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>combination;
        sort(candidates.begin(),candidates.end());
        helper(candidates,target,0,combination,ans);

        return ans;
    }
    void helper(vector<int>&candidates,int target,int start,vector<int>combination,vector<vector<int>>&ans){
        if(target == 0){
            ans.push_back(combination);
            return;
        }

        for(int i = start; i<candidates.size() && candidates[i] <= target; i++){
            if(i == start || candidates[i] != candidates[i-1]){
                combination.push_back(candidates[i]);
                helper(candidates,target - candidates[i], i+1, combination,ans);
                combination.pop_back();
            }
        }
    }
};