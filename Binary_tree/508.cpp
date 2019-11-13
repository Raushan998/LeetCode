class Solution {
public:
    unordered_map<int,int>mp;
    int tree(TreeNode* root){
        if(root==NULL)
            return 0;
        int left=tree(root->left);
        int right=tree(root->right);
        int sum=root->val+left+right;
        mp[sum]++;
        return sum;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int>vect;
        int sum=tree(root);
        int max1=INT_MIN;
        for(auto it:mp)
            max1=max(max1,it.second);
        for(auto it:mp){
            if(it.second==max1)
                vect.push_back(it.first);
        }
        return vect;
    }
};
