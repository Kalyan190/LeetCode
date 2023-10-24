class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int ans = INT_MAX,sum = 0;
        for(int i = 0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
               for(int k = j+1; k<nums.size(); k++){
                   if(nums[i]<nums[j] && nums[k]<nums[j]){
                       sum = nums[i] + nums[j] + nums[k];
                       ans = min(ans,sum);
                   
                   }
               }
            }
        }
        return (ans == INT_MAX ? -1:ans);
    }
};