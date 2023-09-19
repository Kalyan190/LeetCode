class Solution {
public:
    int pivotInteger(int n) {
        int totalSum = 0;
        for(int i = 1; i<=n; i++)
           totalSum += i;

        int PresentSum = 0;

        for(int i = 1; i<= n ; i++){
            PresentSum += i;
            if((totalSum - PresentSum + i) == PresentSum)
              return i;
        }

        return -1;
    }
};