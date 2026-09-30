/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int ans = 0;

    void helper(TreeNode* root, int count) {
        if (root == NULL) {
            ans = max(ans, count);
            return;
        }

        helper(root->left, count + 1);
        helper(root->right, count + 1);
    }

    int maxDepth(TreeNode* root) {
        helper(root, 0);
        return ans;
    }
};