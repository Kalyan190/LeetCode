class Solution {
    public:
        vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
                // 1. brute force 
                        size_t s1=list1.size();
                                size_t s2=list2.size();

                                        vector<string> result;
                                                int minsum=INT_MAX;
                                                        for(int i=0;i<s1;i++){
                                                                    for(int j=0;j<s2;j++){
                                                                                    if(list1[i]==list2[j] && i+j<minsum){  // first we check if the indices less than the minimum and we enter to clear the previous array because there is a value found less than the previous // 
                                                                                                        result.clear();
                                                                                                                            result.push_back(list1[i]);
                                                                                                                                                minsum=i+j;
                                                                                                                                                                }
                                                                                                                                                                				// here we enter to push not to clear because the sums are equals and the restaurants are ditinct 
                                                                                                                                                                                                else if(list1[i]==list2[j]&&i+j==minsum){
                                                                                                                                                                                                                    result.push_back(list1[i]);
                                                                                                                                                                                                                                        minsum=i+j;
                                                                                                                                                                                                                                                        } 
                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                return result;
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                    };
