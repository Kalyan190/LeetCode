class Solution {
private:
  long solve(vector<int>&list){
    int min = 0;
    long res = 0;
    for(int i: list){
        if(i>min){
            res += i - min;
        }
        min = i;
    }
    return res;
  }
public:
    long long minimumOperations(vector<int>& nums, vector<int>& target) {
        int n = nums.size(); 
        vector<int>arr(n);
        for(int i = 0; i<n; i++){
            arr[i] = target[i] - nums[i];
        }
        vector<int>list;
        bool pos = true;
        bool exp;

        long res = 0;

        for(int i = 0; i<n; i++){
            if(arr[i] == 0){
                res += solve(list);
                list.clear();
                pos = true;
            }else{
                exp = arr[i] > 0;
                if(exp != pos){
                    res += solve(list);
                    list.clear();
                }
                list.push_back(abs(arr[i]));
                pos = exp;
            }
        }
        res += solve(list);
        return res;
    }

};