class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int current_win = arr[0];
        int consecutive_win = 0;
        if(k >= arr.size()){
             return *max_element(arr.begin(),arr.end());
        }
        else{
           
           for(int i = 1; i<arr.size(); i++){
               if(current_win > arr[i]){
                   consecutive_win++;
               }else{
                   current_win = arr[i];
                   consecutive_win = 1;
               }
               if(consecutive_win == k){
                   return current_win;
               }
           }
        }

        return current_win;
    }
};