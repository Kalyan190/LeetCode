class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleDigitSum = 0,doubleDigitSum = 0;

        for(int i = 0; i<nums.size(); i++){
            if(nums[i]<10){
                singleDigitSum += nums[i];
            }else{
                doubleDigitSum += nums[i];
            }
        }
        if(singleDigitSum > doubleDigitSum){
            return true;
        }else if(singleDigitSum < doubleDigitSum){
            return true;
        }else{
            return false;
        }
    }
};