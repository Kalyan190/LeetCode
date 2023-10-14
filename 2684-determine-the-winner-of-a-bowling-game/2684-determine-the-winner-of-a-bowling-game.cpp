class Solution {
public:
    int score(vector<int>& player){
        int sum = 0, flag = 0;
        for(auto p: player){
            sum += (flag > 0)? 2*p: p;
            flag--;
            if(p == 10)
            flag = 2;
        }
        return sum;
    }
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int sum1 = score(player1), sum2 = score(player2),ans;
       
        if(sum1 > sum2)
         ans = 1;
        else if(sum1 < sum2)
         ans = 2;
        else if(sum1 == sum2)
        ans = 0;

        return ans;
    }
};