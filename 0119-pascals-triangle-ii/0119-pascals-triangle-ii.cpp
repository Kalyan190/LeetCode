class Solution {
public:
    vector<int> getRow(int rowIndex) {
      vector<int> row(rowIndex + 1, 1);
          
      for (int i = 2; i <= rowIndex; i++) {
        int prev = 1;
        for (int j = 1; j < i; j++) {
            int temp = row[j];
            row[j] += prev;
            prev = temp;
        }
    }
     return row;
    }
};