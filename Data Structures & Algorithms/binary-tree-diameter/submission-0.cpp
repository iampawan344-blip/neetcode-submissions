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
public:int d=0;
int dd(TreeNode* root){
    if(!root)return 0;

        int left=dd(root->left);
         int right=dd(root->right);
         d=max(d,left+right);
         return 1+max(left,right);
         
}
    int diameterOfBinaryTree(TreeNode* root) {

         dd(root);
         return d;     
    }
};
