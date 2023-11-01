/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        vector<int>inorders;
        inorder(root, inorders);
        unordered_map<int,int>freq;
        int maxi = 0;
        for(int val : inorders){
            freq[val]++;
            maxi = max(maxi, freq[val]);

        }
        vector<int>ans;
        for(const auto& pair: freq){
            if(pair.second == maxi){
                ans.push_back(pair.first);
            }
        }
        return ans;
    }
    private:
        void inorder(TreeNode* root, vector<int>&ans){
            if(!root)
            return;
            ans.push_back(root->val);
            inorder(root->left, ans);
            inorder(root->right, ans);
        }
};