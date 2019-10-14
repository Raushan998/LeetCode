#include<iostream>
#include<cstring>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
     int ssize=s.length(),tsize=t.length(),j=0;
        if(ssize==0 && tsize==0)
            return true;
        for(int i=0;i<tsize;i++){
            if(t[i]==s[j]){
                j++;
            }
            if(j==ssize)
                return true;
        }
        return false;
    }

};
int main(){
    Solution s;
    string a,b;
    cin>>a>>b;
    cout<<s.isSubsequence(a,b)<<endl;
    return 0;
}
