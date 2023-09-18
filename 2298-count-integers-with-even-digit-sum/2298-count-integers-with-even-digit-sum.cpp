class Solution {
public:
    int sumOfDigit(int n){
        int sum = 0;
        while(n){
            sum += n%10;
            n /= 10;
        }
        return sum;
    }
    int countEven(int num) {
        int count = 0;
     
        for(int i = 1; i<=num; i++){
            
           if( sumOfDigit(i)%2 == 0)
               count++;
        }
       
        return count;
    }
};