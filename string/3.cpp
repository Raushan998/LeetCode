#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>set_;
        int best=0;
        for(int i=0;i<s.length();i++){
             for(int j=i;j<s.length();j++){
                 if(set_.find(s[j])!=set_.end()){
                     break;
                 }
                 else{
                     cout<<s[j];
                     set_.insert(s[j]);
                 }
             }
             cout<<endl;
            if(best<set_.size())
                best=set_.size();
            set<char>::iterator it1,it2;
            it1=set_.begin();
            it2=set_.end();
            set_.erase(it1,it2);
        }
        return best;
    }
};
int main(){
    Solution s;
    string temp;
    cin>>temp;
    cout<<s.lengthOfLongestSubstring(temp)<<endl;
    return 0;
}
