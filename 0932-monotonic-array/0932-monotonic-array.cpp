class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int dec = 1, inc = 1;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i-1] >= nums[i])
            dec++;
        } 
        for(int i = 1; i<nums.size(); i++){
            if(nums[i-1] <= nums[i])
            inc++;
        }
        if(nums.size() == inc || nums.size() == dec){
            return true;
        }else{
            return false;
        }

    }
};