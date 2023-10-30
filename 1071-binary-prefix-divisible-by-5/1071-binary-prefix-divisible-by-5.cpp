class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool>ans;
        int sum = 0;
        for(int i = 0; i<nums.size(); i++){
           sum = (sum*2 + nums[i])%5;
           ans.push_back(sum == 0);
        }
        return ans;
    }
};