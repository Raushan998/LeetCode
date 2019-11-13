class Solution {
public:
    int ans=1;
    int tree(TreeNode* root,int height){
      if(root==NULL)
        return height-1;
      int l=tree(root->left,height+1);
      int r=tree(root->right,height+1);
      if(abs(l-r)>1)
        ans=0;
      return max(l,r);
    }
    bool isBalanced(TreeNode* root) {
      if(root==NULL)
        return true;
        tree(root,1);
        return ans;  
    }
};
