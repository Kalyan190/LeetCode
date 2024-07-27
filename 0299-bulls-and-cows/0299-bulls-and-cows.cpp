class Solution {
public:
    string getHint(string secret, string guess) {
        int acount = 0, bcount = 0;
        vector<int>sec(10,0);
        vector<int>gues(10,0);

        if(secret.size() != guess.size() || secret.empty()){
            return "0A0B";
        }
        for(int i = 0; i<secret.size(); i++){
            char c1 = secret[i];
            char c2 = guess[i];
            if(c1 == c2)
            acount++;
            else{
                sec[c1-'0']++;
                gues[c2-'0']++;
            }
        }
        for(int i = 0; i<sec.size(); i++){
            bcount += min(sec[i],gues[i]);
        }
        return to_string(acount) + 'A' + to_string(bcount) + 'B';
    }
};