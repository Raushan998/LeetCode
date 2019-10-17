#include<iostream>
#include<cstring>
using namespace std;
class Solution {
public:
    int memo[10000]={0};
    int decodeways(string data,int k){
        if(k==0)
            return 1;
        int s=(data.length())-k;
        if(data[s]=='0')
            return 0;
        int result=decodeways(data,k-1);
        int res=0;
        for(int i=s;i<s+2;i++){
            res=res*10+data[i]-'0';
        }
        if(k>=2 && res<=26)
            result+=decodeways(data,k-2);
        memo[k]=result;
        return result;
    }
    int numDecodings(string s) {
        return decodeways(s,s.length());
    }
};
int main(){
    Solution p;
    string s;
    cin>>s;
    cout<<p.numDecodings(s)<<endl;
    return 0;
}
