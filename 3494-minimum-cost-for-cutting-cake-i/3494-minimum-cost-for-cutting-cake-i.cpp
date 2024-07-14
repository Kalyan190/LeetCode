class Solution {
public:
    int minimumCost(int m, int n, vector<int>& horizontalCut,
                    vector<int>& verticalCut) {
        std::sort(horizontalCut.begin(), horizontalCut.end(),
                  std::greater<int>());
        std::sort(verticalCut.begin(), verticalCut.end(), std::greater<int>());

        int h = 0, v = 0; 
        int h_pieces = 1,
            v_pieces = 1; 
        int totalCost = 0;

        while (h < horizontalCut.size() && v < verticalCut.size()) {
            if (horizontalCut[h] >= verticalCut[v]) {
                totalCost += horizontalCut[h] * v_pieces;
                h_pieces++;
                h++;
            } else {
                totalCost += verticalCut[v] * h_pieces;
                v_pieces++;
                v++;
            }
        }

    
        while (h < horizontalCut.size()) {
            totalCost += horizontalCut[h] * v_pieces;
            h_pieces++;
            h++;
        }

        while (v < verticalCut.size()) {
            totalCost += verticalCut[v] * h_pieces;
            v_pieces++;
            v++;
        }

        return totalCost;
    }
};