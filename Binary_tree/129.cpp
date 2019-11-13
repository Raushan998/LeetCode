class Solution {
public:
    int pathsum2(TreeNode* root,int sum){
        if(root==NULL)
          return 0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,root->val});
        while(!q.empty()){
            int size=q.size();
            while(size--){
              TreeNode* temp=q.front().first;
              int val=q.front().second;
              if(temp->left){
                q.push({temp->left,(val*10)+temp->left->val});
              }
              if(temp->right){
                q.push({temp->right,(val*10)+temp->right->val});
              }
              if(!temp->left && !temp->right)
                sum+=val;
              q.pop();
            }
        }
      return sum;
    }
    int pathsum1(TreeNode* root,int sum){
         if(root==NULL)
           return 0;
         sum+=root->val;
         if(!root->left && !root->right)
           return sum;
         return pathsum1(root->left,sum*10)+pathsum1(root->right,sum*10);
    }
    int sumNumbers(TreeNode* root) {
       return pathsum2(root,0);
    }
};
