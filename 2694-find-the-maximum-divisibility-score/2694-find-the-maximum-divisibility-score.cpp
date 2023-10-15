class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int ans = divisors[0], max_count = 0;
        for(int i = 0; i<divisors.size(); i++){
            int count = 0;
            for(int j = 0; j< nums.size(); j++){
                if(nums[j]%divisors[i] == 0){
                    count++;
                }
            }
            if(count == max_count)
              ans = min(ans, divisors[i]);
            
            if(count > max_count){
                max_count = count;
                ans = divisors[i];
            }

        }
        return ans;
    }
};