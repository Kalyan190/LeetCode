class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
       vector<int>ans;
       vector<int>consecutive;
          int count = 0;
        for(int i = 0; i<words.size(); i++){
            
             if(words[i] == "prev"){
                 count++;
                 if(count > consecutive.size()){
                     ans.push_back(-1);
                 }
                 else{
                     ans.push_back(consecutive[consecutive.size() - count]);
                 }
             }else{
                 count = 0;
                 consecutive.push_back(stoi(words[i]));
             }
        }
        return ans;
    }
};