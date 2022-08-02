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
    
    vector<vector<int>> level(TreeNode*root)
    {
        vector<vector<int>> r;
        if(!root)
        {
            return r;
        }
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            vector<int> l;
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                l.push_back(temp->val);
            }
            r.push_back(l);
        }
        return r;
    }
    int deepestLeavesSum(TreeNode* root) {
        //level order , sum of leaves at last level;
        
        vector<vector<int>> r=level(root);
        int sum=0;
        vector<int> res=r[r.size()-1];
        for(auto i:res)
        {
            sum+=i;
        }
        return sum;
        
    }
};