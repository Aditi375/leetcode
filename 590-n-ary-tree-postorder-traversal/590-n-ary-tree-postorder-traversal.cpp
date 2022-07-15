/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void p(Node*r,vector<int>&res)
    {
        if(!r)
        {
            return ;
        }
        for(int i=0;i<r->children.size();i++)
        {
           p(r->children[i],res);
        }
        res.push_back(r->val);
     
    }
    vector<int> postorder(Node* root) {
        vector<int> res;
        p(root,res);
        return res;
    }
};