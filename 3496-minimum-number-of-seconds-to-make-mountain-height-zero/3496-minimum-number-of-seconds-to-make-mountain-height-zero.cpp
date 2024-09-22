class Solution {
public:
    long long timeToReduce(int x, int workerTime) {
        // Use long long to avoid overflow
         return (long long)workerTime * (long long)x * (x + 1) / 2;
    }

    bool canReduceInTime(int mountainHeight, const vector<int>& workerTimes,
                         long long maxTime) {
        int remainingHeight = mountainHeight;

        for (int workerTime : workerTimes) {
            int lo = 0, hi = mountainHeight, best = 0;

            while (lo <= hi) {
                int mid = (lo + hi) / 2;
                if (timeToReduce(mid, workerTime) <= maxTime) {
                    best = mid; // mid height can be reduced
                    lo = mid + 1;
                } else {
                    hi = mid - 1;
                }
            }

            remainingHeight -=
                best; // Reduce height by the amount this worker can handle

            
            if (remainingHeight <= 0)
                return true;
        }

        return remainingHeight <= 0;
    }

 long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
    sort(workerTimes.begin(), workerTimes.end());

    // Binary search over the possible times
    long long lo = 0, hi = 1e18, result = hi;

    while (lo <= hi) {
        long long mid = lo + (hi - lo) / 2;

        if (canReduceInTime(mountainHeight, workerTimes, mid)) {
            result = mid; // If it's possible, try for less time
            hi = mid - 1;
        } else {
            lo = mid + 1; // If not possible, try more time
        }
    }

    return result;
}
}
;