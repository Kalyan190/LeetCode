class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size(), mid;

        if(target > nums[end-1])
        return end;

        while(start<=end){
            mid = (start + end )/2;
            if(nums[mid] == target)
            return mid;

            if(nums[mid] > target)
            end = mid-1;

            else{
                start = mid + 1;
            }
        } 
        return start;
    }
};