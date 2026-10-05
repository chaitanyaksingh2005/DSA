class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> ans;
        TreeNode* temp;

        if (root == NULL) {
            return ans;
        }

        q.push(root);

        while (!q.empty()) {
            int n = q.size();
            int lar = INT_MIN;

            for (int i = 0; i < n; i++) {

                temp = q.front();
                q.pop();

                if (temp->val > lar) {
                    lar = temp->val;
                }
                if (temp->left) {
                    q.push(temp->left);
                }
                if (temp->right) {
                    q.push(temp->right);
                }
               
            }
             ans.push_back(lar);
        }
        return ans;
    }
};
