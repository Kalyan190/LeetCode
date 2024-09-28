class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
       
        sort(maximumHeight.begin(), maximumHeight.end());

        int n = maximumHeight.size();
        long long totalSum = 0;

        
        int lastAssignedHeight =
            maximumHeight[n - 1] + 1; 

       
        for (int i = n - 1; i >= 0; --i) {
         
            lastAssignedHeight = min(lastAssignedHeight - 1, maximumHeight[i]);

           
            if (lastAssignedHeight <= 0) {
                return -1;
            }

            
            totalSum += lastAssignedHeight;
        }

        return totalSum;
    }
};