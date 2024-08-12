class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        // unordered_map<string,int>mp;

        // int unpaired = 0,ans = 0;
        // for(string w: words){
        //     if(w[0] == w[1]){
        //         if(mp[w]>0){
        //             unpaired--;
        //             mp[w]--;
        //             ans += 4;
        //         }else{
        //             mp[w]++;
        //             unpaired++;
        //         }
        //     }else{
        //         string rev = w;
        //         reverse(rev.begin(),rev.end());
        //         if(mp[rev]>0){
        //             ans += 4;
        //             mp[rev]--;
        //         }else{
        //             mp[w]++;
        //         }
        //     }
        // }
            
        // if(unpaired > 0) ans += 2;
        // return ans;

        // without map solve
        vector<vector<int>>counter(26,vector<int>(26,0));

        int ans = 0;
        for(string w: words){
            int a = w[0] - 'a', b = w[1] - 'a';
            if(counter[b][a]) ans += 4, counter[b][a]--;
            else counter[a][b]++;
        }
        for(int i = 0; i<26; i++){
            if(counter[i][i]){
                ans += 2;
                break;
            }
        }
        return ans;
    }
};