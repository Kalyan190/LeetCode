class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int count = 0, u = 0;
        for(int i = 0; i< moves.size(); i++){
            if(moves[i] == 'L')
            count--;
            else if(moves[i] == 'R')
            count++;
            else u++;
        }
        if(count < 0)
        count *= -1;
        return count + u;
    }
};