class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int max_Ele = *max_element(nums.begin(),nums.end());
        int min_Ele = *min_element(nums.begin(),nums.end());
        int ans = -1;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]> min_Ele && nums[i]<max_Ele)
             ans = nums[i];
           continue;
        }
        return ans;
    }
};