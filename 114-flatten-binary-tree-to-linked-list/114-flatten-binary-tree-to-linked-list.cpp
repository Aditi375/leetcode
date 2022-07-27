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
   void link(TreeNode*t,TreeNode* t1)
   {
       if(t->right)
       {
           link(t->right,t1);
       }
       else
       {
           t->right=t1;
       }
   }
    void flatten(TreeNode* root) {
        
        
        if(!root)
        {
            return ;
        }
          flatten(root->right);
        flatten(root->left);
      
        if(root->left)
        {
            link(root->left,root->right);
            root->right=root->left;
            root->left=NULL;
        }
       
       
     
    }
};