#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reorganizeString(string s) {
        priority_queue<pair<int,char>>pq;
        unordered_map<char,int>my_map;
        for(auto it:s)
            my_map[it]++;
        for(auto it:my_map){
            if(it.second>(s.size()+1)/2)
                return "";
            else
                pq.push({it.second,it.first});
        }
        string res="";
        while(pq.size()>=2){
            auto t1=pq.top();
            pq.pop();
            auto t2=pq.top();
            pq.pop();
            res.push_back(t1.second);
            res.push_back(t2.second);
            if(--t1.first>0)pq.push(t1);
            if(--t2.first>0)pq.push(t2);
        }
        if(pq.size()>0)res.push_back(pq.top().second);
        return res;
    }
};
int main(){
   string str;
   cin>>str;
   Solution s;
   cout<<s.reorganizeString(str)<<endl;
   return 0;
}
