class Solution {
public:
    int countDigits(int num) {
        int n = num, count = 0,digit;
        while(n){
           digit = n%10;
           n /= 10;

         if(num%digit == 0)
            count++;
        }
        return count;
    }
};