#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        vector<int>v;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                v.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else
                i++;
        }
        return v;
    }
};
int main(){
    Solution s;
    vector<int>vect1,vect2;
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        int num;
        cin>>num;
        vect1.push_back(num);
    }
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vect2.push_back(num);
    }
    vector<int>vect3=s.intersect(vect1,vect2);
    return 0;
}
