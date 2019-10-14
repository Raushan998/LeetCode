#include<iostream>
#include<vector>
using namespace std;
int dp[100000]={0};
void numarray(vector<int>&nums){
    dp[0]=nums[0];
    for(int i=1;i<nums.size();i++){
        dp[i]=dp[i-1]+nums[i];
    }
}
int sumrange(int i,int j){
  return dp[j]-dp[i-1];
}
int main(){
    int n,i,j;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        nums.push_back(num);
    }
    int t;
    cin>>t;
    while(t--){
        cin>>i>>j;
        numarray(nums);
        cout<<sumrange(i,j)<<endl;
    }
}
