#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int dp[triangle.size()+1]={0};
        for(int i=triangle.size()-1;i>=0;i--){
            for(int j=0;j<triangle[i].size();j++){
                dp[j]=min(dp[j],dp[j+1])+triangle[i][j];
            }
        }
        return dp[0];
    }
};
int main(){
    Solution s;
    int m;
    cin>>m;
    vector<vector<int>>triangle;
    for(int i=0;i<m;i++){
        vector<int>temp;
        for(int j=0;j<i+1;j++){
             int num;
             cin>>num;
             temp.push_back(num);
        }
        triangle.push_back(temp);
    }
    cout<<s.minimumTotal(triangle)<<endl;
    return 0;
}
