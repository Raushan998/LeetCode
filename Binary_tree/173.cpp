class BSTIterator {
public:
    vector<int>vect;
    int height=0;
    void fillInvector(TreeNode* root){
        if(root==NULL)
          return;
        vect.push_back(root->val);
        fillInvector(root->left);
        fillInvector(root->right); 
    }
    BSTIterator(TreeNode* root) {
       fillInvector(root);
       sort(vect.begin(),vect.end()); 
    }
    
    /** @return the next smallest number */
    int next() {
        int num=vect[height];
        height+=1;
        return num;
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        if(height==vect.size())
          return false;
        else
          return true;
    }
};

