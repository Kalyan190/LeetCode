class Solution {
public:
    int getLucky(string s, int k) {
        int n = s.size();
        
        string num = "";
        for(auto ch : s){
            num += to_string(ch - 'a' + 1);
        }
        
        while(k>0 && num.size() > 0){
            int sum = 0;
            for(int i = 0; i<num.size(); i++){
                 sum += (num[i]-'0');
            }
            num = to_string(sum);
            k--;
        }

        return stoi(num);
    }
};