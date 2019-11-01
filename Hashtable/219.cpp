#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>my_map;
        for(int i=0;i<nums.size();i++){
            int current=nums[i];
            if(my_map[current] && (i-my_map[current])<=k){
                return true;
            }
            else
                my_map[current]=i;
        }
        return false;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>vect;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vect.push_back(num);
    }
    Solution s;
    int k;
    cin>>k;
    cout<<s.containsNearbyDuplicate(vect,k)<<endl;
    return 0;
}
