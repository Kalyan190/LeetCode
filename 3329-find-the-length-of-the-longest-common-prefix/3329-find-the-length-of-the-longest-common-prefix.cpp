class Solution {
public:
    int length(int n){
        string ans = to_string(n);
        return ans.size();
    }
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int>set1;

        for(auto i : arr1){
            while(i > 0){
                set1.insert(i);
                i /= 10;
            }
        }

        int maxi = 0;

        for(auto i : arr2){
            while(i > 0){
                if(set1.find(i) != set1.end()){
                    maxi = max(maxi, length(i));
                    break;

                }
                i /= 10;
                
            }
        }
        return maxi;
    }
};