/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool issymmetric(TreeNode* root1,TreeNode* root2){
       if(root1==NULL || root2==NULL)
         return root1==root2;
       if(root1->val!=root2->val)
         return false;
       return issymmetric(root1->left,root2->right) && issymmetric(root1->right,root2->left);
    }
    bool isSymmetric(TreeNode* root) {
        return issymmetric(root,root);
    }
};

