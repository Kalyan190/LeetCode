class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());

        long long ans = 0, n = nums.size();

        for(int i = 0; i<n; i++){
            int low = lower_bound(begin(nums) + i+1,end(nums),lower - nums[i]) - begin(nums);
            int high = upper_bound(begin(nums) + i + 1,end(nums), upper - nums[i]) - begin(nums);
            ans += 1LL*(high - low);
            // cout<<"index-> "<< low <<" "<< high<<endl;
        }
        return ans;
    }
};