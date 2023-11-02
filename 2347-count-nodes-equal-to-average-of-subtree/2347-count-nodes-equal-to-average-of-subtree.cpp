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
    int ans = 0;
    int sum(TreeNode* root, int& count){
        if(root == NULL)
        return 0;
        count++;
        int left = sum(root->left,count);
        int right = sum(root->right,count);
        return (root->val + left + right);
    }
    void solve(TreeNode* root){
        if(root == NULL)
        return;
        int count = 0;
        int avg = (sum(root, count))/count;
        if(avg == root->val)
        ans++;
        solve(root->left);
        solve(root->right);
    }
    int averageOfSubtree(TreeNode* root) {
        ans = 0;
        solve(root);
        return ans;
    }
};