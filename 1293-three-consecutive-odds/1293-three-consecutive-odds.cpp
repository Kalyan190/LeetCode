class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n = arr.size();

        if(n<3){
            return false;
        }
       int i = 0;
        while(i<n-2){
            if(arr[i]%2 == 1 && arr[i+1]%2 == 1 && arr[i+2]%2==1){
                return true;
            }
            i++;
        }
        return false;
    }
};