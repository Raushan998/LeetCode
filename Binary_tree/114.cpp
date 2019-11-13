class Solution {
public:
    void flatten(TreeNode* root) {
          if(root==NULL)
            return;
          stack<TreeNode*>s;
          s.push(root);
          while(!s.empty()){
               TreeNode* current=s.top();
               s.pop();
               if(current->right){
                 s.push(current->right);
               }
               if(current->left)
                 s.push(current->left);
               if(!s.empty())
                 current->right=s.top();
               current->left=NULL;
          }
    }
};
