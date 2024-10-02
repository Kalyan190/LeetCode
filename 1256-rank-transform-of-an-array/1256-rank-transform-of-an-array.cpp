class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>temp(arr);

        sort(temp.begin(),temp.end());
        unordered_map<int,int>rank;

        for(int &i: temp){
            rank.emplace(i,rank.size() + 1);
        }
        for(int i = 0; i<temp.size(); i++){
            temp[i] = rank[arr[i]];
        }

        return temp;


    }
};