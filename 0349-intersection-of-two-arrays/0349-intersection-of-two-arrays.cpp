class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i = 0; i<nums1.size(); i++){
            for(int j = 0; j<nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                 ans.push_back(nums1[i]);
                break;
                }
            }
        }
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};