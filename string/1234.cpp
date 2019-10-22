#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int balancedString(string s) {
        map<char,int>my_map;
        string temp="QWER";
        int length_=s.length(),count=0;
        for(int i=0;i<s.length();i++)
            my_map[s[i]]++;
        for(int i=0;i<temp.length();i++){
            if(my_map[temp[i]]==0 || my_map[temp[i]]<length_/4)
                continue;
            count+=my_map[temp[i]]-(length_/4);
        }
        return count;
    }
};
int main(){
   string temp;
   cin>>temp;
   Solution s;
   cout<<s.balancedString(temp)<<endl;
   return 0;
}
