class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int>count(k);
        count[0] = 1;
        int prefix = 0, ans = 0;

        for(int a: nums){
            prefix = (prefix + a%k + k)%k;
            ans += count[prefix]++;
        }
        return ans;
    }
};