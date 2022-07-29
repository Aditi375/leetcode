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
    bool evaluateTree(TreeNode* root) {
        
        //if root is leaf node return value
        //else return the value obtained after the operation
        
        
        
        
        
        if(root->left&&root->right)
        {
            if(root->val==2) //or
            {
                return evaluateTree(root->left)||evaluateTree(root->right);
            }
            
            else{
                return evaluateTree(root->left)&&evaluateTree(root->right);
            }
            
        }
        
        return root->val==1;
        
        
    }
};