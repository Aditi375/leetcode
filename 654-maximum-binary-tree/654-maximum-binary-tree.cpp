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
    
    
    TreeNode* tree(vector<int>&nums,int l,int r)
    {
        int m=INT_MIN;
        int idx=0;
        if(l<=r)
        {
            for(int i=l;i<=r;i++)
            {
               if(nums[i]>m) 
               {
                   m=nums[i];
                   idx=i;
               }
            }
        
        TreeNode* temp=new TreeNode(m);
        temp->left=tree(nums,l,idx-1);
            temp->right=tree(nums,idx+1,r);
            return temp;
            
            
            }
        return NULL;
        
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return tree(nums,0,nums.size()-1);
    }
};