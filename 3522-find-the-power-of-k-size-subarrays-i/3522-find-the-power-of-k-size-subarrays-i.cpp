class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> result;
        int n = nums.size();

        for (int i = 0; i <= n - k; i++) {
            vector<int> subarray(nums.begin() + i, nums.begin() + i + k);

            bool isConsecutive = true;
            for (int j = 1; j < k; j++) {
                if (subarray[j] != subarray[j - 1] + 1) {
                    isConsecutive = false;
                    break;
                }
            }

            if (isConsecutive) {
                result.push_back(
                    *max_element(subarray.begin(), subarray.end()));
            } else {
                result.push_back(-1);
            }
        }

        return result;
    }

};