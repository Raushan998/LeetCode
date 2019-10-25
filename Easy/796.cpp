#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool rotateString(string A, string B) {
        string c=A,d;
        while(d!=c){
            d=A.substr(0,0+1);
            d=A.substr(1,A.length())+d;
           // cout<<d<<endl;
            A=d;
            if(A==B)
                return true;
        }
        return false;
    }
};
int main(){
    Solution s;
    string A,B;
    cin>>A>>B;
    cout<<s.rotateString(A,B)<<endl;
}
