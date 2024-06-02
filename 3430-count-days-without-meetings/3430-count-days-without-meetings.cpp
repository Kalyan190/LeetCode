class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());
        int n = meetings.size(), ans = 0;
        int prev = meetings[0][1];
        ans += meetings[0][0] - 1;
        for (int i = 1; i < n; i++) {
            int x2 = meetings[i][0], y2 = meetings[i][1];
            if (x2 > prev)
                ans += x2 - prev - 1;
            prev = max(prev, y2);
        }
        ans += days - prev;
        return ans;
    }
};