class Solution {
public:
    int maxUniqueSplit(string s) {
        unordered_set<string>seen;
        return backtrack(0,s,seen);
    }
private:
   int backtrack(int start,const string& s,unordered_set<string>&seen){
      if(start == s.size()){
        return 0;
      }
      int maxSplit = 0;
      for(int end = start + 1; end<=s.size(); end++){
        string substring = s.substr(start,end - start);
        if(seen.find(substring) == seen.end()){
            seen.insert(substring);
            maxSplit = max(maxSplit, 1 + backtrack(end,s,seen));
            seen.erase(substring);
        }
      }
      return maxSplit;
   }
};