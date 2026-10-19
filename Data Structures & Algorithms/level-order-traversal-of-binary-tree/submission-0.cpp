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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>level;
          vector<vector<int>>ans;
          if(root==nullptr)return ans;
     
        level.push(root);


        while(!level.empty()){
            int n=level.size();
            vector<int>lev;
            for(int i=0;i<n;i++){
            TreeNode* curr=level.front();
            level.pop();
            
            lev.push_back(curr->val);
            if(curr->left)level.push(curr->left);
            if(curr->right)level.push(curr->right);
            }ans.push_back(lev);
        }return ans;
        
    }
};
