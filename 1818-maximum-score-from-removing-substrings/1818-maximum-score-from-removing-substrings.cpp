class Solution {
public:
    int helper(string &s,char a,char b){
        int count = 0;
        stack<char>st;

        for(int i = 0; i<s.length(); i++){
            if(!st.empty() && s[i] == b && st.top() == a){
                st.pop();
                count++;
            }else{
                st.push(s[i]);
            }
        }
        s = "";
        while(!st.empty()){
            s += st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        return count;

    }
    int maximumGain(string s, int x, int y) {
        int abCount = 0,baCount = 0;
        if(x>y){
            abCount = helper(s,'a','b');
            baCount = helper(s,'b','a');
        }else{
            baCount = helper(s,'b','a');
            abCount = helper(s,'a','b');
        }

        return abCount*x + baCount*y;
    }
};