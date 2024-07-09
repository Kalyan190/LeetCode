class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();
        double totalWaiting = 0;
        int currTime = 0;
        for(const auto& customer : customers){
            int arrival = customer[0];
            int service = customer[1];
            if(currTime < arrival){
                currTime = arrival;
            }
            int waiting = currTime - arrival + service;
            totalWaiting += waiting;
            currTime += service;
        }
        return totalWaiting/n;
    }
};