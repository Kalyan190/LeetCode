class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int nsum = 0;
        for(int i : rolls)
        nsum += i;

        int m = rolls.size();
        int totalLength = n + m;
        int msum = mean*totalLength - nsum;

        if(n*6 < msum || msum<n) 
        return {};

        int rem = msum%n;
        int q = msum/n;

        vector<int>res(n,q);
        for(int i = 1; i<=rem; i++){
            res[i]++;
        }
        return res;
    }
};