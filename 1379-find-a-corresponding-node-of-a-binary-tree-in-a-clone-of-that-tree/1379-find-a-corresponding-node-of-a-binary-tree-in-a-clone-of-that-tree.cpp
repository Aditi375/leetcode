/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
     // TreeNode* ans; //global so we can make changes
    void dfs(TreeNode*cloned,TreeNode*target,TreeNode* &ans)
    {
        if(!cloned)
        {
            return ;
        }
        if(cloned->val==target->val)
        {
            ans=cloned;
            return ;
        }
        
        dfs(cloned->left,target,ans);
        dfs(cloned->right,target,ans);
    
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
      
        TreeNode * ans;
        dfs(cloned,target,ans);
        return ans;
    }
};