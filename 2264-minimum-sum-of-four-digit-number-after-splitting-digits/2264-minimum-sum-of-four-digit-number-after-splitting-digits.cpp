class Solution {
public:
    int minimumSum(int num) {
        vector<int>a(4);
        // split all digit
        for(int i=0; i<a.size(); i++){
            a[i] = num%10;
            num /= 10;
        }
        // sort digit
        sort(a.begin(), a.end());
        return (a[0]+a[1])*10 + a[2] + a[3];
    }
};