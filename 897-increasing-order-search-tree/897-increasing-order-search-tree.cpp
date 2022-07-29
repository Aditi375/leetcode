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
    vector<int> r;
    void dfs(TreeNode* root)
    {
        if(!root)
        {
            return ;
        }
        
        dfs(root->left);
        r.push_back(root->val);
        dfs(root->right);
        
    }
    TreeNode* increasingBST(TreeNode* root) {
        
        dfs(root);
        TreeNode* temp1=new TreeNode(r[0]);
        TreeNode* ans=temp1;
        for(int i=1;i<r.size();i++)
        {
            TreeNode *temp2 = new TreeNode(r[i]);
            ans->left=NULL;
            ans->right=temp2;
            ans=ans->right;
        }
        
        return temp1;
    }
};