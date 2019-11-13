class Solution {
public:
    vector<int>vect; 
    void preorder(TreeNode* root){
         if(root==NULL)
           return;
         vect.push_back(root->val);
         preorder(root->left);
         preorder(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return vect;
    }
};
