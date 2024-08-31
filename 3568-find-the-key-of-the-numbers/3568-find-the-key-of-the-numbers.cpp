class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        string n1 = to_string(num1);
        string n2 = to_string(num2);
        string n3 = to_string(num3);

        // Pad n1 with leading zeros
        while (n1.size() < 4) {
            n1 = '0' + n1;
        }

        // Pad n2 with leading zeros
        while (n2.size() < 4) {
            n2 = '0' + n2;
        }

        // Pad n3 with leading zeros
        while (n3.size() < 4) {
            n3 = '0' + n3;
        }

        string ans = "";
        for (int i = 0; i < 4; i++) {
            ans += min({n1[i], n2[i], n3[i]});
        }

        return stoi(ans);
    }
};