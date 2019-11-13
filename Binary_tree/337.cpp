class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)
          return 0;
        queue<TreeNode*>q;
        q.push(root);
        int sum=0;
        while(!q.empty()){
          TreeNode* temp=q.front();
          q.pop();
          if(temp->left){
            if(temp->left->left==NULL && temp->left->right==NULL)
              sum+=temp->left->val;
            q.push(temp->left);
          }
          if(temp->right)
            q.push(temp->right);
        }
      return sum;
    }
};
