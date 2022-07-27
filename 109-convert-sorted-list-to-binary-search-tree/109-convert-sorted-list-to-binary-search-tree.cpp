/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* bst(vector<int>& r, int l,int r1)
    {
        if(l>r1)
        {
            return NULL;
        }
        int mid=(l+r1)/2;
        TreeNode* temp=new TreeNode(r[mid]);
        temp->left=bst(r,l,mid-1);
        temp->right=bst(r,mid+1,r1);
        
        return temp;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        
        vector<int> r;
        while(head!=NULL)
            {
            r.push_back(head->val);
            head=head->next;
            
        }
      
        TreeNode* temp=bst(r,0,r.size()-1);
        return temp;
        
    }
};