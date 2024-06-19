class Solution {
private:
    bool canMakeBouquets(vector<int>& bloomDay, int m, int k, int day) {
        int total = 0;
        for (int i = 0; i < bloomDay.size(); i++) {
            int count = 0;
            while (i < bloomDay.size() && count < k && bloomDay[i] <= day) {
                count++;
                i++;
            }

            if (count == k) {
                total++;
                i--;
            }

            if (total >= m) {
                return true;
            }
        }

        return false;
    }

public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        // int n = bloomDay.size(), left = 1, right = 1e9;
        // if(m*k > n) return -1;

        // while(left < right){
        //     int mid = (left + right)/2, flow = 0, bouq = 0;
        //     for(int j = 0; j<n; ++j){
        //         if(bloomDay[j] > mid)
        //         flow = 0;
        //         else if(++flow >= k){
        //             bouq++;
        //             flow = 0;
        //         }
        //     }
        //     if(bouq < m)
        //     left = mid + 1;
        //     else
        //     right = mid;
        // }
        // return left;

        if ((long long)m * k > bloomDay.size()) {
            return -1;
        }

        int low = 1, high = 1e9;
        while (low < high) {
            int mid = low + (high - low) / 2;

            if (canMakeBouquets(bloomDay, m, k, mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }

};