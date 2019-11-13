class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
      vector<vector<int>>vect;
      vector<int>current;
      findpath(root,sum,current,vect);
      return vect;
    }
    void findpath(TreeNode* root,int sum,vector<int>current,vector<vector<int>>&vect){
         if(root==NULL)
           return;
         current.push_back(root->val);
         if(root->val==sum && root->left==NULL && root->right==NULL){
             vect.push_back(current);
             return;
         }
         findpath(root->left,sum-root->val,current,vect);
         findpath(root->right,sum-root->val,current,vect);
    }
};
