class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int count = 0, low, high, n = nums.size();
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 1)
            low = i;
            if(nums[i] == nums.size())
            high = i;
        }
       
       if(low < high)
       count = low + (n-high-1);
       if(low > high)
       count = low + (n-high-1) -1;

       return count;
       
    }
};