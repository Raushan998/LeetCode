class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
       vector<vector<int>>vect=grid; 
       while(k--){
           int n=vect.size();
           int m=vect[0].size();
           int temp=vect[0][0];
           vect[0][0]=vect[n-1][m-1];
           for(int i=0;i<1;i++){
             for(int j=1;j<m;j++){
               int current=vect[i][j];
               vect[i][j]=temp;
               temp=current;
             }
           }
         
          for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
              int current=vect[i][j];
              vect[i][j]=temp;
              temp=current;
            }
          } 
        }
      return vect;
    }
};
