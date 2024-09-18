class Solution {
public:
static bool comp(string &a, string& b){
    return a+b > b+a;
}
    string largestNumber(vector<int>& nums) {
        vector<string>v;
        for(int i:nums){
            v.push_back(to_string(i));

        }

        sort(v.begin(),v.end(),comp);
        string s = "";
        for(auto a : v){
            s += a;
        }
        int i = 0;
        if(s[0] == '0'){
            return "0";
        }
        return s.substr(i,s.size());
    }
};