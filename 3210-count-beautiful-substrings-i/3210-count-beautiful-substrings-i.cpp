class Solution {
public:
    int beautifulSubstrings(string s, int k) {
        int n = s.size();
        int res = 0;
        vector<char>ch = {'a','e','i','o','u'};

        for(int j = 0; j<n; j++){
            int c = 0, v = 0;
            for(int i = j; i<n; i++){
                if(find(ch.begin(),ch.end(),s[i]) != ch.end()){
                    v++;
                }else{
                    c++;
                }
                if(c == v && (c*v)%k == 0){
                    res++;
                }
            }
        }
        return res;
    }
};