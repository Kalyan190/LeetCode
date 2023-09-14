class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num == 0)
        return true;

        if(num%10 == 0)
        return false;

        return true;
        
    //     int rev1=0,rev2,n;
    //     n = num;
    //     while(n>0){
    //        rev1 = rev1*10 + n%10 ;
    //        n /=10;
           
    //     }
    //     rev2 = rev1;
    //     int ans = 0;
    //     while(rev2>0){
    //     ans = ans*10 + rev2%10 ;
    //     rev2 /=10;                                 
    //  }
    //      if(ans == num)
    //      return true;
    //      else
    //      return false;
     }
};