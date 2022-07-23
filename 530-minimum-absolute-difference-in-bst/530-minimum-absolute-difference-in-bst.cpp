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
    
    void mind(TreeNode*root,vector<int>& r)
    {
        if(!root)
        {
            return ;
        }
        r.push_back(root->val);
        mind(root->left,r);
        mind(root->right,r);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> r;
        mind(root,r);
        sort(r.begin(),r.end());
        int m=INT_MAX;
        
        for(int i=1;i<r.size();i++)
        {
            if(r[i]-r[i-1]<m)
            {
                m=r[i]-r[i-1];
            }
        }
        return m;
    }
};