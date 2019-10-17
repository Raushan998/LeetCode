#include<iostream>
#include<vector>
#include<cstring>
#include<unordered_map>
#include<unordered_set>
using namespace std;
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
         unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
         unordered_map<string,bool>memo;
         return dfs(s, wordSet,memo);
    }
    bool dfs(const string &s,const unordered_set<string>&set_,unordered_map<string,bool>&memo){
            bool ans;
            if(set_.find(s)!=set_.end())
                    return true;
            else if(memo.find(s)!=memo.end()){
                 auto it=memo.find(s);
                 return it->second;
            }
            for(int pos=1;pos<s.length();pos++){
                    const string right=s.substr(pos);
                    cout<<right<<" ";
                    if(set_.find(right)==set_.end())
                        continue;
                    else{
                        const string left=s.substr(0,pos);
                        cout<<"hello world"<<endl;
                        if(dfs(left,set_,memo)){
                                ans=true;
                                memo[s]=true;
                                return ans;
                         }
                   }
            }
            ans=false;
            memo[s]=false;
            return ans;
    }
};
int main(){
    string s;
    cin>>s;
    vector<string>wordDict;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string num;
        cin>>num;
        wordDict.push_back(num);
    }
    Solution m;
    cout<<m.wordBreak(s,wordDict)<<endl;
    return 0;
}
