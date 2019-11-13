class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
          return NULL;
        else if(key<root->val){
          root->left=deleteNode(root->left,key);
          return root;
        }
        else if(key==root->val){
           ///1.Node with 0 children
           if(root->left==NULL && root->right==NULL){
             delete root;
             return NULL;
           }
          ///2.Node with 1 children
          if(root->left!=NULL && root->right==NULL){
            TreeNode* temp=root->left;
            delete root;
            return temp;
          }
          if(root->left==NULL && root->right!=NULL){
            TreeNode* temp=root->right;
            delete root;
            return temp;
          }
          ///3.Node with 3 children
          TreeNode* replace=root->right;
          while(replace->left!=NULL)
            replace=replace->left;
          root->val=replace->val;
          root->right=deleteNode(root->right,replace->val);
          return root;
        }
      else
         root->right=deleteNode(root->right,key);
          return root;
    }
};
