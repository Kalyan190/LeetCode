class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        for(int i = 0; i<dist.size(); i++){
            dist[i] = ceil(dist[i]/(double)speed[i]);
        }
        sort(dist.begin(),dist.end());
        int i = 0;
        for(int j = 0; j<dist.size(); j++){
            if(i>= dist[j]){
                return i;
            }
            i++;
        }
        return dist.size();
    }
};