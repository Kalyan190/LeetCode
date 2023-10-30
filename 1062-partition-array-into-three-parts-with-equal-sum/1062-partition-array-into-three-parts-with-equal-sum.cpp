class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int totalsum = 0;
        for(int i = 0; i<arr.size(); i++){
            totalsum += arr[i];
        }
        if(totalsum % 3 != 0)
        return false;

        int target = totalsum/3;
        int sum = 0, count = 0;

        for(int i = 0; i<arr.size()-1; i++){
            sum += arr[i];
            if(sum == target){
                sum = 0;
                count++;
                if(count == 2)
                return true;
            }
        }
        return false;
    }
};