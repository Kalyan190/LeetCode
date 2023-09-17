class Solution {
public:
    int alternateDigitSum(int n) {
    //   int sumEven = 0, sumOdd = 0, count = 0;
        
    //     while(n>0){
    //         if(count%2)
    //         sumOdd += n%10;
    //         else
    //         sumEven += n%10;
    //         count++;
    //         n /= 10; 
    //     }
    
    //     return (count%2)?sumEven - sumOdd:sumOdd - sumEven;

    // second method tricky question

           int sum = 0;
           while(n>0){
               sum = -sum + n%10;
               n /= 10;
           }

           return sum;
    
    }
};