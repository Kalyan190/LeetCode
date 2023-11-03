class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        int current = 0;
        for(int i = 1; i<=n; i++){
            if(current == target.size()){
               break;
            }
            if(target[current] == i){
                ans.push_back("Push");
                current++;
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;

    }
};