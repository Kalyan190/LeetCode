class Solution {
private:
  bool CheckPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i = 2; i*i<=n; i++){
          if(n%i == 0){
            return false;
          }
    }
    return true;
  }
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int maxi = 0;
        vector<int>prime;
        for(int i = 0; i<nums.size(); i++){
            if(CheckPrime(nums[i])){
                prime.push_back(i);
            }
        }
        if(prime.size() == 1){
            return 0;
        }

        sort(prime.begin(),prime.end());
        int n = prime.size();
        maxi = abs(prime[0] - prime[n-1]);

        return maxi;
    }
};