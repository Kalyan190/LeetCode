class Solution {
public:
    int digit(int num){
        int digi = 0;
        while(num>0){
            digi = max(digi, num%10);
            num /= 10;
        }
        return digi;
    }
    int maxSum(vector<int>& nums) {
        int ans = -1;
        for(int i = 0; i<nums.size(); i++){
           for(int j = i+1; j<nums.size(); j++){
               int a = nums[i], b = nums[j];
               if(digit(a) == digit(b)){
                   ans = max(a+b,ans);
               }
           }
        }
        return ans;
    }
};