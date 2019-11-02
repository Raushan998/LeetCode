#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>my_map;
        for(auto ch:p){
            my_map[ch]++;
        }
        vector<int>temp;
        int index,i=0;
        while(i<s.size()){
            int index1=i;
            if(my_map[p[i]]){
                index=i;
                int t=0;
                while(t<p.size()){
                    if(my_map[s[i]]){
                        my_map[s[i]]--;
                        i++;
                    }
                    else if(my_map[s[i]]<0){
                        index=-1;
                        break;
                    }
                    t++;
                }
            }
            i=index1;
            i++;
            for(auto ch:p)
                my_map[ch]=0;
            for(auto ch:p)
                my_map[ch]++;
            if(index!=-1)
                temp.push_back(index);
        }
        return temp;
    }
};
int main(){
    Solution s;
    string str,temp;
    cin>>str>>temp;
    vector<int>vect=s.findAnagrams(str,temp);
    for(auto it:vect)
       cout<<it<<" ";
    return 0;
}
