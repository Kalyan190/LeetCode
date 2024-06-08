class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        // int i = 0, j = 0;
        // if(nums.size()<2){
        //     return false;
        // }
        // map<long long,int>mp;
        // long long sum = 0;
        // while((i<nums.size() - 1) && j<nums.size()){
        //      if(j<nums.size()){
        //      sum = sum + nums[j++];
        //      }
             
        //      if(j== nums.size()){
        //         i++;
        //         j = i;
        //         mp[sum]++;
        //         sum = 0;
        //      }
        // }

        // for(auto i: mp){
        //     if(i.first % k == 0){
        //         return true;
        //     }
        // }
        // return false;

        // optimise method;

        int n = nums.size(), preSum = 0, sum = 0;
        map<int,int>mp;
        for(int i = 0; i<n; i++){
            sum = (sum + nums[i])%k;
            if(mp[sum]) return true;
            mp[preSum]++;
            preSum = sum;
        }
        return false;



    }
};