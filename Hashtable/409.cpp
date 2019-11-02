#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>ch_;
        for(auto ch:s)
            ch_[ch]++;
        int count=0,k=1;
        for(auto it:ch_){
            cout<<it.first<<"-"<<it.second<<"-"<<count<<endl;
            if(it.second==1 && k){
                count+=1;
                k--;
            }
            if(it.second&1)
                count+=it.second-1;
            else
                count+=it.second;
        }
        return count;
    }
};
int main(){
    string s;
    cin>>s;
    Solution temp;
    cout<<temp.longestPalindrome(s)<<endl;
    return 0;
}
