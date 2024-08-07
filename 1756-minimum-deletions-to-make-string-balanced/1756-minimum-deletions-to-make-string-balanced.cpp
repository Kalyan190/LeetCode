class Solution {
public:
    int minimumDeletions(string s) {
        // int n = s.size();
        // vector<int>a(n,0);
        // vector<int>b(n,0);
        // int c = 0;

        // for(int i = 0; i<n; i++){
        //     b[i] = c;
        //     if(s[i] == 'b')c++;
        // }   
        // c = 0;
        // for(int i = n-1; i>=0; i--){
        //     a[i] = c;
        //     if(s[i] == 'a')c++;
        // }  

        // int ans = n;
        // for(int i = 0; i<n; i++){
        //     ans = min(ans,a[i]+b[i]);
        // } 
        // return ans;  

        stack<char>stk;
        int c = 0;
        for(int i = 0; i<s.size(); i++){
            if(!stk.empty() && stk.top() == 'b' && s[i] == 'a'){
                stk.pop(),c++;
            }else{
                stk.push(s[i]);
            }
        }
        return c;
    }
};