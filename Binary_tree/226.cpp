class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
          return NULL;
        queue<TreeNode*>q;
        q.push(root);
        TreeNode* temp;
        while(!q.empty()){
          temp=q.front();
           q.pop();
            if(temp->left){
              q.push(temp->left);
            }
            if(temp->right){
              q.push(temp->right);
            }
          TreeNode* node=temp->left;
          temp->left=temp->right;
          temp->right=node;
        } 
      return root;
    }
};
