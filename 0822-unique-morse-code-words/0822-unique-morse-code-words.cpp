class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> a = {".-","-...","-.-.","-..",".","..-.","--.","....",
                          "..",".---","-.-",".-..","--","-.","---",".--.",
                                            "--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<string, int> symbol;
        for(int i = 0; i<words.size(); i++){
            string word;
            for(int j = 0; j<words[i].size(); j++){
                word += a[words[i][j] - 'a'];
            }
            symbol[word] = 1;
        }
        return symbol.size();
    }
};