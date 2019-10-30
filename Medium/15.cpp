#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>vect;
        vector<int>temp;
        set<int>set_;
        for(int i=0;i<nums.size()-3;i++){
            int l=i+1,m=nums.size()-1;
            while(l<m){
                if(nums[i]+nums[l]+nums[m]==0){
                     temp.push_back(nums[i]);
                     temp.push_back(nums[l]);
                     temp.push_back(nums[m]);
                     l++,m--;
                }
                else if(nums[i]+nums[l]+nums[m]>0)
                    m--;
                else
                    l++;
            }
            for(int i=0;i<temp.size();i+3){
                if(set_.find(temp[i])!=set_.end() && set_.find(temp[i+1])!=set_.end() && set_.find(temp[i+2])!=set_.end()){
                    continue;
                }
                else{
                    set_.insert(temp[i]);
                    set_.insert(temp[i+1]);
                    set_.insert(temp[i+2]);
                    vect.push_back(temp);
                }
            }
            temp.clear();
        }
        return vect;
    }
};
int main() {
    vector<int>nums;
    Solution s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        nums.push_back(num);
    }
    vector<vector<int>>vect=s.threeSum(nums);
    for(int i=0;i<vect.size();i++){
        for(int j=0;j<vect[i].size();j++)
            cout<<vect[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
