class Solution {
public:
   int helper(vector<int>&nums,int k, int diff){
    int count = 0,j = 0,n = nums.size();

    for(int i = 0; i<n; i++){
        while(j<n && (nums[j] - nums[i]) <= diff){
            j++;
        }
        count +=(j-i-1);
    }
    return count;
   }
    int smallestDistancePair(vector<int>& nums, int k) {
        // vector<int>temp;
        // for(int i = 0; i<nums.size(); i++){
        //     for(int j = i+1; j<nums.size(); j++){
        //         int diff = abs(nums[j] - nums[i]);
        //         temp.push_back(diff);
        //     }
        // }

        // int count = 0;
        // sort(temp.begin(),temp.end());
        //  int ans = -1;
        // for(auto i: temp){
        //     count++;
        //     if(count == k){
        //      ans = i;
        //     }
        // }
        // return ans;

        // Binary search method
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int low = 0, high = nums[n-1] - nums[0];
        int ans = -1;

        while(low<=high){
            int mid = low + (high - low)/2;
            int count = helper(nums,k,mid);
            if(count>=k){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
};