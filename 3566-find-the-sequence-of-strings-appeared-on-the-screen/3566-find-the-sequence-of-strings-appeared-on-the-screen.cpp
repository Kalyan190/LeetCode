class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string>s;
        string t = "";

        for(char c: target){
            t += 'a';
            s.push_back(t);

            while(t.back() != c){
                t.back() = (t.back() == 'z') ? 'a': t.back() + 1;
                s.push_back(t);
            }
        }
        return s;
    }
};