class Solution {
public:
    int maximumSwap(int num) {
        string n = to_string(num);

        if (n.size() == 1) {
            return num;
        }

        int maxIdx = -1, maxDigit = -1, leftIdx = -1, rightIdx = -1;

        for (int i = n.size() - 1; i >= 0; i--) {
            if (n[i] > maxDigit) {
                maxDigit = n[i];
                maxIdx = i;
            } else if (n[i] < maxDigit) {
                leftIdx = i;
                rightIdx = maxIdx;
            }
        }

        if (leftIdx != -1) {
            swap(n[leftIdx], n[rightIdx]);
            return stoi(n);
        }

        return num;
    }
};