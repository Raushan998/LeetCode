#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
       int uniquePathsWithObstacles(vector<vector<int>>&obstacleGrid){
            int row=obstacleGrid.size();
            int col=obstacleGrid[0].size();
            long long dp[row][col];
            memset(dp,0,sizeof(dp));
            if(obstacleGrid[0][0]==1)
                 return 0;
            for(int i=0;i<row;i++){
                 if(obstacleGrid[i][0]==1)
                     break;
                 else
                    dp[i][0]=1;
            }
            for(int j=0;j<col;j++){
                if(obstacleGrid[0][j]==1)
                    break;
                else
                    dp[0][j]=1;
            }
            for(int i=1;i<row;i++){
                for(int j=1;j<col;j++){
                    if(obstacleGrid[i][j]==1){
                         dp[i][j]=0;
                    }
                    else{
                        dp[i][j]=dp[i-1][j]+dp[i][j-1];
                    }
                }
            }
            if(obstacleGrid[row-1][col-1]==1)
                return 0;
            else
               return dp[row-1][col-1];
       }
};
int main(){
    Solution s;
    vector<vector<int>>obstacleGrid;
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        vector<int>row;
        for(int j=0;j<n;j++){
            int num;
            cin>>num;
            row.push_back(num);
        }
        obstacleGrid.push_back(row);
    }
    cout<<s.uniquePathsWithObstacles(obstacleGrid)<<endl;
    return 0;
}
