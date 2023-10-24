class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(auto n: nums){
            vector<int>digit;
            while(n > 0){
                digit.push_back(n%10);
                n /= 10;
            }
            for(int i = digit.size() - 1; i>=0; --i){
                ans.push_back(digit[i]);
            }
        }

        return ans;
    }
};