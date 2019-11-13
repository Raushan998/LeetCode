class Solution {
public:
    void inorder(TreeNode* root,vector<int>&vect){
        if(root==NULL)
            return;
        inorder(root->left,vect);
        vect.push_back(root->val);
        inorder(root->right,vect);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>vect;
        inorder(root,vect);
        return vect;
    }
};
