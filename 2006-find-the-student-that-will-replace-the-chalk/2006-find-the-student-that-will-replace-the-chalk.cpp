class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        // int index = -1;
        // int i = 0;
        // while(k>=0){
        //      for(int i = 0; i<chalk.size(); i++){
        //         k = k-chalk[i];
        //         if(k<=0){
        //             index = i;
        //             break;
        //         }
        //      }
        // }
        // return index;

        // another method

        long long sum = 0;
        for(int i: chalk){
           sum += i;
        }
        int remainingChalk = k%sum;

        for(int i = 0;i<chalk.size(); i++){
            if(remainingChalk < chalk[i]){
                return i;
            }
            remainingChalk -= chalk[i];
        }
        return 0;
    }
};