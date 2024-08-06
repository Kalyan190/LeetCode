class Solution {
public:
    int minimumPushes(string word) {
        vector<int>letterFreq(26,0);

        for(char c: word){
            letterFreq[c -'a']++;
        }
        sort(letterFreq.rbegin(),letterFreq.rend());
        int totalPushes = 0;

        for(int i = 0; i<26; i++){
            if(letterFreq[i] == 0) break;
            totalPushes += (i/8 + 1)*letterFreq[i];
        }
        return totalPushes;
    }
};