class Solution {
public:
    void seive_algo(vector<bool>&v, int n){
        v[0] = v[1] = false;

        for(int i = 2; i*i<n; i++){
            for(int j = 2*i; j<n; j+=i){
                v[j] = false;
            }
        }
    }
    bool primeSubOperation(vector<int>& nums) {
        int n = nums.size();
        vector<bool>isPrime(1005,true);
        seive_algo(isPrime,1005);

        vector<int>prime;
        for(int i = 0; i<1004; i++){
            if(isPrime[i]) prime.push_back(i);
        }

        int flag = 0;
        int prev = nums[n-1];
        for(int i = n-2; i>=0; i--){
            if(nums[i] < prev){
                prev = nums[i];
                continue;
            }
            flag = 1;
            for(int sub = 0; sub<prime.size() && prime[sub] < nums[i]; sub++){
                if(nums[i] - prime[sub] < prev){
                    prev = nums[i] - prime[sub];
                    flag = 0;
                    break;
                }
            }
            if(flag) break;
        }

        return !flag;
    }
};