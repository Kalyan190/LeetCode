class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        long count = 0;
        for(int i = 0; i<nums.size(); i++){
            count += i - mp[i-nums[i]]++;
        }

        return count;
    }
};