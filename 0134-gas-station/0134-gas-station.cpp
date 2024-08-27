class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // Brute force use
        //  int n = gas.size();
        //  for(int i = 0; i<n; i++){
        //     int totalFuel = 0;
        //     int stopCount = 0, j = i;
        //     while(stopCount < n){
        //         totalFuel += gas[j%n] - cost[j%n];
        //         if(totalFuel < 0) break;
        //         stopCount++;
        //         j++;
        //     }
        //     if(stopCount == n && totalFuel >= 0) return i;
        //  }
        //   return -1;

        //optimise Solution

        int n = gas.size();
        int total_surplus = 0, surplus = 0,start = 0;

        for(int i = 0; i<n; i++){
            total_surplus += gas[i] - cost[i];
            surplus += gas[i] - cost[i];

            if(surplus < 0){
                surplus = 0;
                start = i+1;
            }
        }
        return (total_surplus < 0)? -1:start;
         
    }
};