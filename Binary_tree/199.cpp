class Solution {
public:
    vector<int>vect;
    void printright1(TreeNode* root){
         if(root==NULL)
           return;
         queue<TreeNode*>q;
         q.push(root);
         while(!q.empty()){
           int size=q.size();
           while(size>0){
             TreeNode* temp=q.front();
             q.pop();
             size--;
             if(size==0)
               vect.push_back(temp->val);
             if(temp->left)
               q.push(temp->left);
             if(temp->right)
               q.push(temp->right);
           }
         } 
    }
    void printright(TreeNode* root,int level,int &max_level){
         if(root==NULL)
           return;
         if(max_level<level){
           vect.push_back(root->val);
           max_level=level;
         }
         printright(root->right,level+1,max_level);
         printright(root->left,level+1,max_level);
    }
    vector<int> rightSideView(TreeNode* root) {
        int max_level=0;
       // printright(root,1,max_level);
        printright1(root); 
        return vect;
    }
};
