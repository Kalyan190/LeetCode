class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return count(nums,k) - count(nums,k-1);
    }
    int count(vector<int>&nums, int k){
        int res = 0, i = 0, n = nums.size();
        for(int j = 0; j<n; j++){
            k -= nums[j]%2;
            while(k<0)
            k += nums[i++]%2;
           res += j - i + 1;
        }
        return res;
    }
};