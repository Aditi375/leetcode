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
    
    void in(TreeNode*root,vector<int>& r)
    {
        if(!root)
        {
            return ;
        }
        
        in(root->left,r);
        r.push_back(root->val);
        in(root->right,r);
    }
    TreeNode *blbst(vector<int>& r,int l,int r1)
    {
      if(l>r1)  
      {
          return NULL;
      }
        int mid=(l+r1)/2;
        TreeNode* temp=new TreeNode(r[mid]);
        temp->left=blbst(r,l,mid-1);
        temp->right=blbst(r,mid+1,r1);
        return temp;
        
    }
    TreeNode* balanceBST(TreeNode* root) {
        
        
        //binary search on inorder mid=root;
        //left subtree 0 to mid-1,right subtree mid+1 to n-1 (n=size of inorder)
        vector<int> r;
        in(root,r);
        
     TreeNode* res=  blbst(r,0,r.size()-1);
        return res;
        
    }
};