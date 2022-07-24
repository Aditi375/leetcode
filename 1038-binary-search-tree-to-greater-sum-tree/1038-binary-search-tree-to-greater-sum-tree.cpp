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
      int  sum=0;
    TreeNode* bstToGst(TreeNode* root) {
       // node=node+right;
        //left=left+node;
        //inorder reversal
        
        if(root==NULL)
        {
            return root;
            
        }
   
        
        if(root)
        {
            bstToGst(root->right);
            root->val+=sum;
         sum=root->val;
            bstToGst(root->left);
        }
        return root;
    }
};