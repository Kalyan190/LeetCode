class Solution {
public:
    int hIndex(vector<int>& citi) {
        sort(citi.begin(),citi.end());

        int count = 0;
        int n = citi.size();
        for(int i = 0; i<n; i++){
            if(citi[i] >= n-i){
                count = max(count,n-i);
            }
        }
        return count;
    }
};