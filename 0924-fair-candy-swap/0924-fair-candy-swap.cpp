class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA = 0, sumB = 0;
        for(int i = 0; i<aliceSizes.size(); i++){
            sumA += aliceSizes[i];
        }
        for(int i = 0; i<bobSizes.size(); i++){
            sumB += bobSizes[i];
        }
        int diff = (sumB- sumA)/2;

        set<int> s;
        for(auto x:aliceSizes){
            s.insert(x + diff);
        }
        for(auto x: bobSizes){
            if(s.find(x) != s.end()){
                return {x - diff, x};
            }
        }
        return {};
    }
};