class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int g) {
        map<int,int>count;

        for(int i: hand)
        count[i]++;

        for(auto i: count){
            if(count[i.first] > 0){
                for(int j = g-1; j>=0; j--){
                    if((count[i.first + j] -= count[i.first]) < 0)
                    return false;
                }
            }
        }
        return true;
    }
};