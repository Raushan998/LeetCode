#include<iostream>
#include<vector>
using namespace std;
class Solution{
  public:
    int minPathSum(vector<vector<int>>& grid) {
         int row=grid.size();
         int col=grid[0].size();
         long long dp[row][col];
         for(int i=0;i<row;i++){
            for(int j=0;j<col;j++)
                dp[i][j]=0;
         }
         dp[0][0]=grid[0][0];
         for(int i=1;i<row;i++){
             dp[i][0]=dp[i-1][0]+grid[i][0];
         }
         for(int j=1;j<col;j++){
            dp[0][j]=dp[0][j-1]+grid[0][j];
         }
         for(int i=1;i<row;i++){
             for(int j=1;j<col;j++)
                 dp[i][j]=min(dp[i][j-1],dp[i-1][j])+grid[i][j];
         }
         return dp[row-1][col-1];
    }
};
int main(){
    Solution s;
    vector<vector<int>>grid;
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        vector<int>temp;
        for(int j=0;j<n;j++){
             int num;
             cin>>num;
             temp.push_back(num);
        }
        grid.push_back(temp);
    }
    cout<<s.minPathSum(grid)<<endl;
    return 0;
}
