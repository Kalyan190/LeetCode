class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> freq, firstIndex;
        int degree = 0, min_len = INT_MAX;
        for(int i = 0; i<nums.size(); i++){
            freq[nums[i]]++;

            if(freq[nums[i]] == 1)
            firstIndex[nums[i]] = i;

            if(freq[nums[i]] == degree){
                int currLen = i - firstIndex[nums[i]] + 1;
                if(min_len > currLen)
                min_len = currLen;
            }
            if(freq[nums[i]] > degree){
                min_len = i - firstIndex[nums[i]] + 1;
                degree = freq[nums[i]];
            }
             
        }
        return min_len;
    }
};