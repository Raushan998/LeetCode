#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<pair<int,int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>>pq1;
        int n1=nums1.size(),n2=nums2.size();
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++)
                pq1.push(make_pair(nums1[i]+nums2[j],make_pair(nums1[i],nums2[j])));
        }
        if(k>n1*n2)
            k=n1*n2;
        vector<pair<int,int>>vect;
        while(k-- && !pq1.empty()){
           vect.push_back(pq1.top().second);
           pq1.pop();
        }
        return vect;
    }
};
int main(){
    vector<int>vect1,vect2;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
         int num;
         cin>>num;
         vect1.push_back(num);
    }
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vect2.push_back(num);
    }
    Solution s;
    vector<pair<int,int>>res=s.kSmallestPairs(vect1,vect2);
    return 0;
}
