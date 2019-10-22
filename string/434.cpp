#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if(s.length()<=1)
            return false;
        char substring=s[0];
        string k="";
        k=substring+k;
        for(int i=1;i<s.length();i++){
            if(substring==s[i])
                break;
            k=k+s[i];
        }
        int i=0;
        while(i<s.length()){
             int j=0;
             while(j<k.length()){
                 if(k[j]==s[i]){
                     j++,i++;
                 }
                 else
                     return false;
             }
        }
        return true;
    }
};
int main(){
     string temp;
     getline(cin,temp);
     Solution s;
     cout<<s.repeatedSubstringPattern(temp);
}
