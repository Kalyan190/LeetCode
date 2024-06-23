class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int>dec,inc;
        int ans = 0,left = 0;

        for(int i = 0;i<nums.size(); i++){
            int n = nums[i];
            while(!dec.empty() && n > dec.back()){
                dec.pop_back();
            }
            dec.push_back(n);
            while(!inc.empty() && n<inc.back()){
                inc.pop_back();
            }
            inc.push_back(n);

            while(dec.front() - inc.front() > limit){
                if(dec.front() == nums[left]){
                    dec.pop_front();
                }
                if(inc.front() == nums[left]){
                    inc.pop_front();
                }
                left++;
            }
            ans = max(ans, i - left + 1);
        }
        return ans;
    }
};