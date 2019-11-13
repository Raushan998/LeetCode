class Solution {
public:
    int height=INT_MAX;
    void mindepth(TreeNode* root,int depth){
        if(root==NULL)
          return;
        if(root->left==NULL && root->right==NULL)
          height=min(height,depth) ;
        mindepth(root->left,depth+1);
        mindepth(root->right,depth+1);
        
    }
    int minDepth(TreeNode* root) {
      if(root==NULL)
        return 0;
      mindepth(root,1);
      return height;
    }
};
