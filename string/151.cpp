#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int i=s.length()-1;
        string temp="";
        int str=reverse(s.begin(),s.end());
        cout<<str<<endl;
        while(i>=0){
             while(i>=0 && s[i]==' ')i--;
             int j=i;
             while(i>=0 && s[i]!=' ')i--;
             if(temp==""){
                 temp=s.substr(i+1,j);
             }
             else{
                  temp+=" ";

                 }
             }
        return temp;
    }
};
int main(){
    Solution s;
    string temp;
    getline(cin,temp);
    cout<<s.reverseWords(temp);
}
