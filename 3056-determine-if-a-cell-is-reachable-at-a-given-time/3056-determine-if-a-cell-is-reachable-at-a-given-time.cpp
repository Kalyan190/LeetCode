class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int X_diff = abs(sx - fx);
        int Y_diff = abs(sy - fy);

        if(X_diff == 0 && Y_diff == 0 && t == 1)
        return false;
        return max(X_diff,Y_diff) <= t;
    }
};