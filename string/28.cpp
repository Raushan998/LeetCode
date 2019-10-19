#include<iostream>
#include<cstring>
#include<map>
using namespace std;
class Solution {
    public:
        int strStr(string haystack, string needle) {
        if(haystack.length()==0)
            return -1;
        if(needle.length()==0)
            return 0;
        int i=0,j=0,start;
        while(i<haystack.length() && j<needle.length()){
            if(j==0)
                start=i;
            if(haystack[i]==needle[j]){
                j++;
                i++;
                if(j==needle.length())
                    return i-j;
                continue;
            }
            j=0;
            i=start+1;
        }

        return -1;
    }
};

int main(){
    Solution s;
    string haystack,needle;
    cin>>haystack>>needle;
    cout<<s.strStr(haystack,needle)<<endl;
    return 0;
}
