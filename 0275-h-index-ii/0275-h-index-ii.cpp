class Solution {
public:
    int hIndex(vector<int>& c) {
        int n = c.size();
        int s = 0, e = n-1;
        
        int ans = 0;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(c[mid] >= n-mid){
                ans = max(ans,n-mid);
                e = mid - 1;
            }
            else{
                s = mid+1;
            }
        }
        return ans;
    }
};