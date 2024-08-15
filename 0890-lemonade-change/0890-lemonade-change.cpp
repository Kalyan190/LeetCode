class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        // int fives = 0,tens = 0;
        // for(int i = 0; i<bills.size(); i++){
        //     if(bills[i] == 5)
        //        fives++;
        //     else if(bills[i] == 10){
        //         if(fives == 0){
        //             return false;
        //         }
        //         fives--;
        //         tens++;
        //     }
        //     else{
        //         if(tens > 0 && fives > 0){
        //             tens--;
        //             fives--;
        //         }
        //         else if(fives >= 3){
        //             fives -= 3;

        //         }
        //         else{
        //             return false;
        //         }
        //     }
            
        // }
        // return true;

        int five = 0, ten = 0;

        for(int i : bills){
            if(i == 5) five++;
            else if(i == 10) five--, ten++;
            else if(ten > 0) ten--, five--;
            else five -= 3;
            if(five < 0) return false;
        }
        return true;
    }
};