#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int myAtoi(string str) {
        long long integer=0;
        int flag,i=0;
        while(i<str.length() && str[i]==' ')i++;
        if(i==str.length())return 0;
        flag=str[i]=='-'?-1:1;
        if(str[i]=='+' || str[i]=='-')i++;
        while(i<str.length() && (str[i]>='0' && str[i]<='9')){
               integer=integer*10+flag*(str[i]-'0');
               if(integer>INT_MAX)
                  return INT_MAX;
               else if(integer<INT_MIN)
                   return INT_MIN;
              i++;
        }
        return integer;
    }
};
int main(){
    Solution s;
    string temp;
    getline(cin,temp);
    cout<<s.myAtoi(temp)<<endl;
    return 0;
}
