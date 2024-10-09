class Solution {
public:
    int minAddToMakeValid(string s) {
        
        int right = 0,left = 0;
        for(char ch: s){
           if(ch == '(') right++;
           else if(right > 0)
            right--;
            else left++;
        }
        return left + right;

    }
};