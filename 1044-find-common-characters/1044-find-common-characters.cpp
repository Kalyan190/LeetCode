class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>ans;
        unordered_map<char,int>charCount;

        for(char c: words[0]){
            charCount[c]++;
        }

        for(int i = 1; i<words.size(); i++){
            unordered_map<char,int>wordCount;
            for(char c: words[i]){
                wordCount[c]++;
            }

            for(auto &pair :charCount){
                char c = pair.first;
                charCount[c] = min(charCount[c], wordCount[c]);
            }
        }
        for(auto &pair: charCount){
            char c = pair.first;
            int count = pair.second;
            while (count > 0) {
             ans.push_back(string(1, c));
                count--;
                                                
            }
        }

        return ans;

    }
};