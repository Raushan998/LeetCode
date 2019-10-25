#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool maxJump(vector<int>&nums,int i,int j){
        if(i>=nums.size())
            return true;
        bool ans=false;
        for(int k=1;k<=j;k++){
            ans=maxJump(nums,i+k,nums[i+k]);
        }
        return ans;
    }
    bool canJump(vector<int>& nums) {
        return maxJump(nums,0,nums[0]);
    }
};
int main(){
    Solution s;
    vector<int>vect;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vect.push_back(num);
    }
    cout<<s.canJump(vect)<<endl;
    return 0;
}
