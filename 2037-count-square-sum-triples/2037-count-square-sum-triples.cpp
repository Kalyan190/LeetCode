class Solution {
public:
    int countTriples(int n) {
        int res = 0;
        for(int i = 1; i<=n; i++){
            for(int j = i+1; j<=n; j++){
              int sum = (i*i) + (j*j);
              int r = sqrt(sum);
              if(r*r == sum && r<=n){
                  res += 2;
              }
            }
        }
        return res;
    }
};