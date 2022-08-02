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
    int ans=0;
public:
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        preorder(root,root->val);
        return ans;
    }
    
    void preorder(TreeNode* root , int maxVal){
        if(!root) return;
        if(root->val>=maxVal) ans++;
    
        preorder(root->left,max(maxVal,root->val));
        preorder(root->right,max(maxVal,root->val));
    }
};