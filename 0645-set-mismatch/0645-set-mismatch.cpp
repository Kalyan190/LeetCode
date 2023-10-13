class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans(2);
        vector<int>a(nums.size());
        for(int i = 0; i<nums.size(); i++){
            a[nums[i] -1]++;
        }

        for(int i = 0; i<nums.size(); i++){
            if(a[i]==2)
            ans[0] = i+1;
            if(a[i] == 0)
            ans[1] = i+1;
           
        }
        return ans;
    }
};