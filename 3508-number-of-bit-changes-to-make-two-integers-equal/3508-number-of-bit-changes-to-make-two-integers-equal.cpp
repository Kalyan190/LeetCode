class Solution {
public:
    int minChanges(int n, int k) {
        if ((n | k) != n) {
            return -1;
        }

        int changes = 0;
        while (n > 0) {
            int lastBitN = n & 1;
            int lastBitK = k & 1;
            if (lastBitN == 1 && lastBitK == 0) {
                changes++;
            }
            n >>= 1;
            k >>= 1;
        }

        return changes;
    
}
};