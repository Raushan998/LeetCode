#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char,string>my_map;
        vector<string>vect;
        int i=0;
        string temp="";
        while(i<str.size()){
            if(str[i]==' '){
                vect.push_back(temp);
                 while(str[i]==' ')
                    i++;
                temp="";
             }
            else{
                temp+=str[i];
                i++;
            }
        }
        vect.push_back(temp);
        for(int i=0;i<pattern.size();i++){
            if(my_map.find(pattern[i])!=my_map.end()){
                my_map[pattern[i]]=vect[i];
            }
            else if(my_map[pattern[i]]!=vect[i])
                return false;
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
