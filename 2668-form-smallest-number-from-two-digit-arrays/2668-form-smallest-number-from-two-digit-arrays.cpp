class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        vector<int> freq(10);
        for(auto i: nums1)
        freq[i]++;
        for(auto i: nums2)
        freq[i]++;

        int k = 2, ans = 0;
        int min1 = *min_element(nums1.begin(), nums1.end());
        int min2 = *min_element(nums2.begin(), nums2.end());

        for(int i = 1; i<=9; i++){
            if(freq[i] == 2)
            return i;
        }
        if(min2 < min1)
        swap(min2, min1);
        return min1*10 + min2;
        
    }
};