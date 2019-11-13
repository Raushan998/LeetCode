class Solution {
public:
    vector<int>vect;
    void kthelement(TreeNode* root){
      if(root==NULL)
        return;
      kthelement(root->left);
      vect.push_back(root->val);
      kthelement(root->right);
    } 
    int kthSmallest(TreeNode* root, int k) {
          kthelement(root);
          return vect[k-1];
    }
};
