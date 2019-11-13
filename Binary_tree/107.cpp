class Solution {
public:
    void levelorder(TreeNode* root,int n,vector<vector<int>>&vect){
      if(root==NULL)
        return;
      if(vect.size()<n)
        vect.push_back({root->val});
      else
        vect[n-1].push_back(root->val);
      levelorder(root->left,n+1,vect);
      levelorder(root->right,n+1,vect);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>vect;
        levelorder(root,1,vect);
      return vector<vector<int>>(vect.rbegin(),vect.rend());
    }
};
