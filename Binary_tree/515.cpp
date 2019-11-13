class Solution {
public:
    map<int,int>mp;
    void largestnum(TreeNode* root,int n){
        if(root==NULL)
          return;
        if(mp.find(n)==mp.end())
          mp[n]=root->val;
        else
          mp[n]=max(mp[n],root->val);
        largestnum(root->left,n+1);
        largestnum(root->right,n+1); 
    }
    vector<int> largestValues(TreeNode* root) {
        largestnum(root,0);
        vector<int>vect;
        for(auto it=mp.begin();it!=mp.end();it++){
          vect.push_back(it->second);
        }
      return vect;
    }
};
