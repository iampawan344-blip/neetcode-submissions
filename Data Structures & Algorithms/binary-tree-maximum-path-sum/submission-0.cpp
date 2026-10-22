class Solution {
public:
    int result = INT_MIN;

    int sumi(TreeNode* root) {
        if (root == nullptr) return 0;
        int left = max(0, sumi(root->left));
        int right = max(0, sumi(root->right));
        result = max(result, root->val + left + right);
        return root->val + max(left, right);
    }

    int maxPathSum(TreeNode* root) {
        sumi(root);
        return result;
    }
};