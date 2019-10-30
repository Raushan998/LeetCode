#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>vect;
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])]>=0){
                nums[abs(nums[i])]=-nums[abs(nums[i])];
            }
            else
                vect.push_back(abs(nums[i]));
        }
        return vect;
    }
};
int main(){
    Solution s;
    vector<int>vect;
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        int n;
        cin>>n;
        vect.push_back(n);
    }
    vector<int>v=s.findDuplicates(vect);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}
