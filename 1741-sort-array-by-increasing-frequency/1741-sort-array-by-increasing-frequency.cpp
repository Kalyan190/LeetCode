class Solution {
public:
    
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;

        for(int i = 0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        sort(begin(nums),end(nums),[&](int a,int b){
            return mp[a] == mp[b] ? a>b: mp[a]<mp[b];
        });
       
        return nums;
    }
};