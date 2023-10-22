class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max_element = INT_MIN,index = -1;
        if(nums.size() == 1)
        return 0;

        for(int i = 0; i<nums.size(); i++){
            if(max_element < nums[i]){
               max_element = nums[i];
               index = i;
            }   
        }
        for(int i = 0; i<nums.size(); i++){
            if(i != index){
                if(nums[i]*2 > max_element){
                    return -1;
                }
            }
        }

        return index;
    }
};