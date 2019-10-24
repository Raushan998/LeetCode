#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool detectCapitalUse(string word) {
        for(int i=0;i<word.length();i++){

            if(i==0 && islower(word[i]))
                continue;
            else if(isupper(word[i]))
                continue;
            else
               return false;
        }
        return true;
    }
};
int main(){
    Solution s;
    string temp;
    cin>>temp;
    cout<<s.detectCapitalUse(temp)<<endl;
    return 0;
}
