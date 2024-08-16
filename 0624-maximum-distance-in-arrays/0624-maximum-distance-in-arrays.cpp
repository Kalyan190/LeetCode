class Solution {
public:
    int maxDistance(vector<vector<int>>& array) {
        int ans = 0;
        int smallest = array[0][0];
        int biggest = array[0].back();
      

        for(int i = 1; i<array.size(); i++){
            ans = max(ans,abs(array[i].back() - smallest));
            ans = max(ans,abs(biggest - array[i][0]));
            smallest = min(smallest,array[i][0]);
            biggest = max(biggest,array[i].back());
        }
        return ans;
    }
};