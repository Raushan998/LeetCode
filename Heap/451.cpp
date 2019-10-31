#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>>pq;
        map<char,int>my_map;
        for(int i=0;i<s.length();i++){
            my_map[s[i]]++;
        }
        for(auto it=my_map.begin();it!=my_map.end();it++){
            pq.push({it->second,it->first});
        }
        string temp="";
        while(!pq.empty()){
            auto x=pq.top();
            pq.pop();
            int v=x.first;
            while(v--){
               temp+=x.second;
            }
        }
        return temp;
    }
};
int main(){
   Solution temp;
   string s;
   cin>>s;
   cout<<temp.frequencySort(s)<<endl;
   return 0;
}
