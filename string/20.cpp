#include <iostream>
#include<stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int i=0,k=s.length();
        for(int i=0;i<s.length();i++){
           if(s[i]=='(' || s[i]=='{' || s[i]=='['){
             st.push(s[i]);
           }
           if(s[i]==')' || s[i]=='}' || s[i]==']'){
              if(st.empty() || (s[i]==')' && st.top()!='('))
                  return false;
              else if(st.empty() || (s[i]=='}' && st.top()!='{'))
                    return false;
              else if(st.empty() || (s[i]==']' && st.top()!='['))
                   return false;
              else
                  st.pop();
           }
        }
       // cout<<st.top()<<endl;
        return st.empty();
    }
};
int main() {
    Solution s;
    string temp;
    cin>>temp;
    cout<<s.isValid(temp)<<endl;
    return 0;
}
