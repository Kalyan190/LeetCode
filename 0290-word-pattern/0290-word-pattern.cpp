class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, int> pat;
        unordered_map<string, int> wor;

        istringstream in(s);
        string word;
        int i = 0, n = pattern.size();
        for(word; in>>word; i++){
            if(i ==n || pat[pattern[i]] != wor[word])
            return false;
            pat[pattern[i]] = wor[word] = i+1;
        }
        return i == n;
    }
};