#include<iostream>
#include<vector>
using namespace std;
int dp[10000]={0};
int helper(vector<int>&nums,int n){
      if(n<0)
         return 0;
      if(dp[n]!=-1)
         return dp[n];
      int ans=max(nums[n]+helper(nums,n-2),helper(nums,n-1));
        dp[n]=ans;
      return ans;
}
int rob(vector<int>&nums) {
    for(int i=0;i<nums.size();i++)
       dp[i]=-1;
    return helper(nums,nums.size()-1);
}
int main(){
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        nums.push_back(num);
    }
    cout<<rob(nums)<<endl;
}
