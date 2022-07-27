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
class BSTIterator {
public:
     int i=0;
      vector<int> r;
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
    BSTIterator(TreeNode* root) {
      
        in(root,r);
    }
    
    int next() {
       
        return r[i++];
    }
    
    bool hasNext() {
        int n=r.size();
        if(i>n-1)
        {
            return false;
        }
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */