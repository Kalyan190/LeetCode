class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int digitSum = 0, ArraySum = 0;

        for(auto n: nums){
            ArraySum += n;

            while(n>0){
                digitSum += n%10;
                n /= 10;

            }
        }

        return abs(ArraySum - digitSum);
    }
};