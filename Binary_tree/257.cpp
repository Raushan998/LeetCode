class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
      vector<string>vect;  
      if(root==NULL)
          return vect;
        dfs(root,"",vect); 
        return vect;
    }
    void dfs(TreeNode* root,string s,vector<string>&vect){
        s+=to_string(root->val); 
        if(root->left==NULL && root->right==NULL){
          vect.push_back(s);
          return;
        }
        if(root->left)
        dfs(root->left,s+"->",vect);
        if(root->right)
        dfs(root->right,s+"->",vect);
    }
};
