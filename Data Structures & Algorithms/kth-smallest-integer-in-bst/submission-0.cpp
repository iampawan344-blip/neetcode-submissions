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
void inorder(TreeNode*root,priority_queue<int>&pq,int k){
    if(root==nullptr)return;
    inorder(root->left,pq,k);
    pq.push(root->val);
    inorder(root->right,pq,k);
    if(pq.size()>k)pq.pop();
}

    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int>pq;
        inorder(root,pq,k);
        return pq.top();

        
    }
};
