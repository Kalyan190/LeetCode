class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int,int>>ans(nums.size());

        for(int i = 0; i<nums.size(); i++){
            int original = nums[i];
            int mapped = original == 0 ? mapping[0]:0;
            int placevalue = 1;

            while(original > 0){
                int digit = original%10;
                mapped += placevalue*mapping[digit];
                original /= 10;
                placevalue *= 10;
            }
            ans[i] = {mapped,i};
        }
        sort(ans.begin(),ans.end());
        vector<int>res;
        for(auto &pair: ans){
            res.push_back(nums[pair.second]);
        }

        return res;

    }
};