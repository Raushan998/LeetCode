#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        unordered_map<int,int>my_map;
        priority_queue<pair<int,int>>pq;
        for(auto it:barcodes){
            my_map[it]++;
        }
        for(auto it:my_map){
            pq.push({it.second,it.first});
        }
        vector<int>vect;
        while(pq.size()>=2){
            auto t1=pq.top();
            pq.pop();
            auto t2=pq.top();
            pq.pop();
            vect.push_back(t1.second);
            vect.push_back(t2.second);
            if(--t1.first>0)pq.push(t1);
            if(--t2.first>0)pq.push(t2);
        }
        if(pq.size()>0)vect.push_back(pq.top().second);
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
    vector<int>temp=s.rearrangeBarcodes(vect);
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}
