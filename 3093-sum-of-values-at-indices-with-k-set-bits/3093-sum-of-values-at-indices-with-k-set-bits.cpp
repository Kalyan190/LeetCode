class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans = 0; 
        for(int i = 0; i<nums.size(); i++){
            int count = 0, temp = i;
            while(temp){
                count += temp & 1;
                temp >>= 1;
            }
            if(count == k){
                ans += nums[i];
            }
        }
        return ans;
    }
};