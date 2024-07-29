class Solution {
public:
    int numTeams(vector<int>& rating) {
        int count = 0;
        int n = rating.size();
        
        // Brute force solve
        // for(int i = 0; i<n-2; i++){
        //     for(int j = i+1; j<n-1;j++){
        //         for(int k = j+1; k<n; k++){
        //             if((rating[i]> rating[j] && rating[j] > rating[k]) || (rating[i]< rating[j] && rating[j] < rating[k])){
        //                 count++;
        //             }
        //         }
        //     }
        // }
        // return count;

        // optimise method
        for(int i = 1; i<n-1; i++){
            int leftSmall = 0, leftLarge = 0;
            int rightSmall = 0, rightLarge = 0;

            for(int j = 0; j<i; j++){
                if(rating[j] < rating[i]){
                    leftSmall++;
                }
                if(rating[j] > rating[i]){
                    leftLarge++;
                }
            }
            for(int j = i+1; j<n; j++){
                if(rating[j]<rating[i]){
                    rightSmall++;
                }
                if(rating[j] > rating[i]){
                    rightLarge++;
                }
            }
            count += leftSmall*rightLarge + leftLarge*rightSmall;
        }
        return count;

    }
};