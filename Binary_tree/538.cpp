class Solution {
public:
    void greatertree(TreeNode* root,int &sum){
      if(root==NULL)
        return;
      greatertree(root->right,sum);
      int temp=root->val;
      root->val+=sum;
      sum+=temp;
      greatertree(root->left,sum);
    }
    TreeNode* convertBST(TreeNode* root) {
        int sum=0;
        greatertree(root,sum);
        return root;
    }
};
