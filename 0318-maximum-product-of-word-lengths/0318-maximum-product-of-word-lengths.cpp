class Solution {
public:
    int maxProduct(vector<string>& words) {
        int maxlen = 0;
        vector<int>val(words.size());
        for(int i = 0; i<words.size(); i++){
            for(auto c: words[i]){
                val[i] |= (1<< (c-'a'));
            }
        }

        for(int i = 0; i<words.size(); i++){
            for(int j = i+1; j<words.size(); j++){
                if((val[i]& val[j]) == 0 && words[i].size()*words[j].size() > maxlen){
                    maxlen = max(maxlen, (int)(words[i].size()*words[j].size()));
                }
            }
        }
        return maxlen;
    }
};