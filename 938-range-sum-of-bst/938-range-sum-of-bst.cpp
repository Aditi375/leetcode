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
    
    void inorder(TreeNode*root,vector<int>&r,int low,int high)
    {
        if(!root)
        {
            return ;
        }
        inorder(root->left,r,low,high);
        if(root->val>=low&&root->val<=high)
        {
            r.push_back(root->val);
        }
        inorder(root->right,r,low,high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> r;
        inorder(root,r,low,high);
        int sum=0;
        for(auto i:r)
        {
            sum+=i;
        }
        return sum;
    }
};