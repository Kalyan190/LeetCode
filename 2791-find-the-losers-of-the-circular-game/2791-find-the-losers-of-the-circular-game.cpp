class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int> dice(n,0);
        int i = 0, j = 1;
        while(1){
            if(dice[i] == 1)
            break;
            dice[i] = 1;
            i = (i+j*k)%n;
            j++;
        }

        vector<int> ans;
        for(int i = 0; i<n; i++){
            if(dice[i] == 0)
            ans.push_back(i+1);
        }
        return ans;
    }
};