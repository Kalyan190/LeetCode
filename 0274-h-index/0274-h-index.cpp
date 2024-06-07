class Solution {
public:
    int hIndex(vector<int>& citi) {
        sort(citi.begin(),citi.end());
        // Brute force solve--------------
        // int count = 0;
        // int n = citi.size();
        // for(int i = 0; i<n; i++){
        //     if(citi[i] >= n-i){
        //         count = max(count,n-i);
        //     }
        // }
        // return count;

        // Binary search --------------

        int n = citi.size();
        int s = 0,e = n-1;
        int ans = 0;

        while(s<=e){
            int mid = s + (e-s)/2;
            if(citi[mid] >= n-mid){
                ans = max(ans,n-mid);
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return ans;
    }
};