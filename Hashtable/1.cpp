#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        unordered_map<int,int>my_map;
        for(int i=0;i<nums.size();i++){
            my_map[nums[i]]=i;
        }
        sort(nums.begin(),nums.end());
        vector<int>vect;
        int l=0,r=nums.size()-1;
        while(l<r){
            if(nums[l]+nums[r]==target){
                cout<<my_map[nums[l]]<<" "<<my_map[nums[r]]<<endl;
                vect.push_back(my_map[nums[l]]);
                vect.push_back(my_map[nums[r]]);
                break;
                l++,r--;
            }
            else if(nums[l]+nums[r]>target)
                  r--;
            else
                 l++;
        }
        return vect;
    }
};
int main(){
    Solution s;
    int n,target;
    cin>>n;
    vector<int>vect;
    for(int i=0;i<n;i++){
         int num;
         cin>>num;
         vect.push_back(num);
    }
    cin>>target;
    s.twoSum(vect,target);
    return 0;
}
