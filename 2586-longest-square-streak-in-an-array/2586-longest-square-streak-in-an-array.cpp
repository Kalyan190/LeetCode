class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        map<int,int>mp;
        sort(nums.begin(),nums.end());
        int ans = -1;
        for(int num : nums){
            int square = sqrt(num);
            if(square*square == num && mp.find(square) != mp.end()){
                mp[num] = mp[square] + 1;
                ans = max(ans,mp[num]);
            }else{
                mp[num] = 1;
            }
        }
        return ans;
    }
};