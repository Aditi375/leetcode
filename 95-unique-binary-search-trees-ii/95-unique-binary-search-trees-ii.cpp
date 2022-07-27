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
    
    vector<TreeNode*> tree(int l,int r)
    {
        vector<TreeNode*> ans;
        if(l>r)
        {
            return {NULL};
        }
        
        
        for(int i=l;i<=r;i++)
        {
            
            
            vector<TreeNode*> left1=tree(l,i-1);
            vector<TreeNode*> right1=tree(i+1,r);
            
            for(auto x:left1)
            {
                for(auto y:right1)
                {
                    TreeNode* temp=new TreeNode(i);
                    temp->left=x;
                    temp->right=y;
                    ans.push_back(temp);
                    
                }
            }
            
            
              
            
        }
        return ans;
    }
    vector<TreeNode*> generateTrees(int n) {
        return tree(1,n);
    }
};