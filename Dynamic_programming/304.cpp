#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>>dp;
    void NumMatrix(vector<vector<int>>& matrix) {
       dp=vector<vector<int>>(matrix.size(), vector<int>(matrix[0].size(), 0));
       dp[0][0]=matrix[0][0];
       for(int i=1;i<matrix.size();i++){
           dp[i][0]=dp[i-1][0]+matrix[i][0];
       }
       for(int j=1;j<matrix[0].size();j++){
            dp[0][j]=dp[0][j-1]+matrix[0][j];
       }
       for(int i=1;i<matrix.size();i++){
          for(int j=1;j<matrix[i].size();j++){
                dp[i][j]=(dp[i][j-1]-dp[i-1][j-1])+dp[i-1][j]+matrix[i][j];
          }
       }
       cout<<endl;
       for(int i=0;i<dp.size();i++){
           for(int j=0;j<dp[0].size();j++)
               cout<<dp[i][j]<<" ";
           cout<<endl;
       }
    }
    int sumRegion(int row1, int col1, int row2, int col2) {
         if(row1==0 && col1==0){
                return dp[row2][col2];
           }
           else if(row1==0){
                   return dp[row2][col2]-dp[row2][col1-1];
           }
           else if(col1==0)
                return dp[row2][col2]-dp[row1-1][col2];
           else
                return dp[row2][col2]-dp[row1-1][col2]-dp[row2][col1-1]+dp[row1-1][col1-1];
    }
};
int main() {
   Solution s;
   vector<vector<int>>matrix;
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
       vector<int>temp;
       for(int j=0;j<n;j++){
           int num;
           cin>>num;
           temp.push_back(num);
       }
       matrix.push_back(temp);
   }
   s.NumMatrix(matrix);
   int row1,col1,row2,col2;
   cin>>row1>>col1>>row2>>col2;
   cout<<s.sumRegion(row1,col1,row2,col2)<<endl;
   return 0;
}
