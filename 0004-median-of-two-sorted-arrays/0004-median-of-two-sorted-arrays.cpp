class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>arr;
        for(auto a:nums1)
        arr.push_back(a);

        for(auto b:nums2)
        arr.push_back(b);

        sort(arr.begin(),arr.end());

        int median = arr.size();
        return median%2?arr[median/2]:(arr[median/2-1]+arr[median/2])/2.0;
    }
};