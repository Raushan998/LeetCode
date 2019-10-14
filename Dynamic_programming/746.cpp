#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost){
         int dp[100000]={0};
         dp[0]=cost[0],dp[1]=cost[1];
         for(int i=2;i<cost.size();i++){
             dp[i]=min(dp[i-1]+cost[i],dp[i-2]+cost[i]);
         }
         return min(dp[cost.size()-1],dp[cost.size()-2]);
    }
};
int main(){
    Solution s;
    int n;
    cin>>n;
    vector<int>cost;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        cost.push_back(num);
    }
    cout<<s.minCostClimbingStairs(cost)<<endl;
}
