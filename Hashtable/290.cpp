#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char,string>mp1;
        unordered_map<string,char>mp2;
        vector<string>vect;
        int i=0;
        string temp;
        for(char ch : str)
        {
            if(ch == ' ')
            {
                vect.push_back(temp);
                temp = "";
            }
            else
                temp+= ch;
        }
        vect.push_back(temp);
        if(vect.size()!=pattern.size())
             return false;
        for(int i=0;i<pattern.size();i++){
            if(mp1.find(pattern[i])!=mp1.end() && mp1[pattern[i]]!=vect[i]){
                return false;
            }
            else if(mp2.find(vect[i])!=mp2.end() && mp2[vect[i]]!=pattern[i]){
                return false;
            }
            mp1[pattern[i]]=vect[i];
            mp2[vect[i]]=pattern[i];
        }
        return true;

    }
};
int main(){
    string pattern;
    cin>>pattern;
    cin.ignore();
    string str;
    getline(cin,str);
    Solution s;
    cout<<s.wordPattern(pattern,str)<<endl;
    return 0;
}
