class Solution {
public:
    int dp[100000]={0};
    int climbStairs(int n) {
        if(n==0 || n==1)
            return 1;
        else if(dp[n]!=0)
            return dp[n];
        int ans=climbStairs(n-1)+climbStairs(n-2);
        dp[n]=ans;
        return ans;
    }
};
