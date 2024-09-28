class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
        // Sort the array in ascending order
        sort(maximumHeight.begin(), maximumHeight.end());

        int n = maximumHeight.size();
        long long totalSum = 0;

        // Start assigning heights from the largest possible height
        int lastAssignedHeight =
            maximumHeight[n - 1] + 1; // Start larger than any possible height

        // Traverse the sorted array from the largest maximumHeight to smallest
        for (int i = n - 1; i >= 0; --i) {
            // Ensure uniqueness by assigning a height less than or equal to
            // maxHeight[i]
            lastAssignedHeight = min(lastAssignedHeight - 1, maximumHeight[i]);

            // If at any point the lastAssignedHeight becomes zero or negative,
            // return -1
            if (lastAssignedHeight <= 0) {
                return -1;
            }

            // Add the assigned height to the total sum
            totalSum += lastAssignedHeight;
        }

        return totalSum;
    }
};