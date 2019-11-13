class Solution {
public:
    pair<int,int> houserob(TreeNode* root){
       if(root==NULL)
         return {0,0};
       pair<int,int>right=houserob(root->right);
       pair<int,int>left=houserob(root->left);
        return {max(root->val+right.second+left.second,left.first+right.first), right.first+left.first};
    }
    int rob(TreeNode* root) {
       if(root==NULL)
         return 0;
       return houserob(root).first;
    }
};
