class Solution {
public:
    string originalDigits(string s) {
        // int n = s.size();
        // vector<string>words =
        // {"zero","two","four","six","eight","one","three","five","seven","nine"};
        // vector<char>num = {'0','2','4','6','8','1','3','5','7','9'};
        // vector<char>symbol = {'z','w','u','x','g','o','r','f','v','i'};
        // vector<int>count(26,0);


        // for (int i = 0; i < n; i++) {
        //     count[s[i] - 'a']++;
        // }

        // string ans = "";

        // for (int i = 0; i < 10; i++) {
        //     int cnt = count[symbol[i] - 'a'];
        //     for (int j = 0; j < words[i].size(); j++) {
        //         count[words[i][j] - 'a'] -= cnt;
        //     }
        //     while (cnt--)
        //         ans.push_back(num[i]);
        // }
        // sort(ans.begin(), ans.end());
        // return ans;

        // use mapping method;
        vector<int>count(26);
        for(auto c: s){
            count[c - 'a']++;
        }
        vector<int>nums(10);

        nums[0] = count['z' - 'a'];
        nums[2] = count['w' - 'a'];
        nums[4] = count['u' - 'a'];
        nums[6] = count['x' - 'a'];
        nums[8] = count['g' - 'a'];

        nums[1] = count['o' - 'a'] - nums[0] - nums[2] - nums[4];
        nums[3] = count['h' - 'a'] - nums[8];
        nums[5] = count['f' - 'a'] - nums[4];
        nums[7] = count['s' - 'a'] - nums[6];
        nums[9] = count['i' - 'a'] - nums[5] - nums[6] - nums[8];

        string res = "";
        for(int i = 0; i<10; i++){
            cout<<"num: "<<nums[i]<<endl;
            while(nums[i]--){
                res += to_string(i);
            }
        }
        return res;

    }
};