class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        set<int> element;
        int count = 0;
        for(int i = nums.size() - 1; i>=0; i--){
            count++;
            if(nums[i] <= k)
            element.insert(nums[i]);

            if(element.size() == k)
            return count;
        }
        return 0;
    }
};