class Solution {
public:
    int count = 0;

    void solve(TreeNode* root, int maxi) {
        if (!root) return;

        if (root->val >= maxi) {
            count++;
        }

        maxi = max(maxi, root->val);

        solve(root->left, maxi);
        solve(root->right, maxi);
    }

    int goodNodes(TreeNode* root) {
        count = 0;
        solve(root, root->val);
        return count;
    }
};