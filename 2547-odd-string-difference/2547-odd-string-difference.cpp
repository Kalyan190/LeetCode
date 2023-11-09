class Solution {
public:
    string oddString(vector<string>& words) {
        unordered_map<string, int>mp;
        unordered_map<string,string>amp;
        for(auto w: words){
            string s = "";
            for(int j = 0; j<w.size()-1; j++){
                int t = w[j+1] - w[j];
                s += to_string(t) + "_";
            }
            mp[s]++;
            amp[s] = w;
        }
        for(auto m : mp){
            if(m.second == 1)
            return amp[m.first];
        }
        return "";
    }
};