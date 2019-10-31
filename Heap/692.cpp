#include<bits/stdc++.h>
using namespace std;
struct mycompare{
       bool operator()(pair<string,int>a,pair<string,int>b){
            if(a.second==b.second)return a>b;
            return a.second<b.second;
       }
};
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>my_map;
        for(int i=0;i<words.size();i++){
             my_map[words[i]]++;
        }
        priority_queue<pair<string,int>,vector<pair<string,int>>,mycompare>pq;
        for(auto it:my_map){
             pq.push({it.first,it.second});
        }
        vector<string>temp;
        while(k-- && !pq.empty()){
             temp.push_back(pq.top().first);
             pq.pop();
        }
        return temp;
    }
};
int main(){
   vector<string>str;
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
        string num;
        cin>>num;
        str.push_back(num);
   }
   int k;
   cin>>k;
   Solution s;
   vector<string>res=s.topKFrequent(str,k);
   for(int i=0;i<res.size();i++)
       cout<<res[i]<<" ";
   cout<<endl;
   return 0;
}
