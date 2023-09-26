class Solution {
public:
    void reverseString(vector<char>& s) {
        // for(int i = 0; i<s.size()/2; i++){
        //     char temp = s[i];
        //     s[i] = s[s.size()-1-i];
        //     s[s.size()-1-i] = temp;
        // }
        //second method;
        int start = 0, end = s.size()-1;
        while(start<end)//{
             swap(s[start++],s[end--]);
            //  start++;
            //  end--;
       // }

        

    }
};