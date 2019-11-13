class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        int num;
        queue<TreeNode*>q;
        q.push(root);
        num=root->val;
        while(!q.empty()){
          TreeNode* temp=q.front();
          q.pop();
          if(temp->right){
            num=temp->right->val;
            q.push(temp->right);
          }
          if(temp->left){
            num=temp->left->val;
            q.push(temp->left);
          }
        }
      return num;
    }
};
