class Solution {
public:
    string originalDigits(string s) {
        int n = s.size();
        vector<string>words =
        {"zero","two","four","six","eight","one","three","five","seven","nine"};
        vector<char>num = {'0','2','4','6','8','1','3','5','7','9'};
        vector<char>symbol = {'z','w','u','x','g','o','r','f','v','i'};
        vector<int>count(26,0);


        for (int i = 0; i < n; i++) {
            count[s[i] - 'a']++;
        }

        string ans = "";

        for (int i = 0; i < 10; i++) {
            int cnt = count[symbol[i] - 'a'];
            for (int j = 0; j < words[i].size(); j++) {
                count[words[i][j] - 'a'] -= cnt;
            }
            while (cnt--)
                ans.push_back(num[i]);
        }
        sort(ans.begin(), ans.end());
        return ans;

        // use mapping method;
    }
};