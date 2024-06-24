class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        // int curr = 0, res = 0, n = nums.size();
        // for(int i = 0; i<n; i++){
        //     if(i>= k && nums[i-k] > 1){
        //         curr--;
        //         nums[i-k] -= 2;
        //     }
        //     if(curr%2 == nums[i]){
        //         if(i+k > n) return -1;
        //         nums[i] += 2;
        //         curr++;
        //         res++;
        //     }
        // }
        // return res;

        // Another method to solve

        int ans = 0, n = nums.size();
        queue<int>record;

        for(int i = 0; i<n; i++){
            int pivot = record.size() % 2 == 0 ? nums[i] : 1 - nums[i];
            if(pivot == 0){
                ans++;
                record.push(i + k - 1);
            }
            if(!record.empty() && i == record.front())
            record.pop();
        }
        return record.empty() ? ans : -1;
    }
};