class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long v = (long long)length * (long long)width * (long long)height;
        string ans;
        if(length >= 1e4 || width >= 1e4 || height >= 1e4 || v >= 1e9 ){
            ans = "Bulky";
        }
        if(mass >= 100){
            ans = "Heavy";
        }
        if((length >= 1e4 || width >= 1e4 || height >= 1e4 || v >= 1e9) && mass >= 100 ){
            ans = "Both";
        }
        if(length < 1e4 && width < 1e4 && height < 1e4 && v < 1e9 && mass<100){
            ans = "Neither";
        }
        return ans;
    }
};