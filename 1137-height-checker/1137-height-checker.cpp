class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>student;
        int count = 0;
        for(int i = 0; i<heights.size(); i++){
            student.push_back(heights[i]);
        }
        sort(student.begin(),student.end());
        for(int i = 0; i<heights.size(); i++){
            if(heights[i] != student[i]){
                count++;
            }
        }
        return count;
    }
};