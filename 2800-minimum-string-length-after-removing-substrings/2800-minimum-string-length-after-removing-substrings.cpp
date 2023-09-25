class Solution {
public:
    int minLength(string s) {
        string s1 = "AB", s2 = "CD";
        while(s.find(s1) != string::npos || s.find(s2) != string::npos){
            if(s.find(s1) != string::npos){
                int o1 = s.find(s1);
                s.erase(o1,2);

            }
            if(s.find(s2)!= string::npos){
                int o2 = s.find(s2);
                s.erase(o2,2);

            }
        }
        return s.length();
    }
};