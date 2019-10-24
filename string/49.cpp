#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map< string, vector< string > > hashMap;
        vector<vector<string>>result;
        for(auto s:strs) {
            string tmp = s;
            sort(s.begin(),s.end());
            cout<<s<<endl;
            hashMap[s].push_back(tmp);
        }

        for( auto hm : hashMap ) {
            result.push_back( hm.second );
        }
        return result;
    }
};
int main(){
    Solution s;
    vector<string>temp;
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        string str;
        cin>>str;
        temp.push_back(str);
    }
    vector<vector<string>>hashMap=s.groupAnagrams(temp);
    for(int i=0;i<hashMap.size();i++){
         for(int j=0;j<hashMap[i].size();j++){
             cout<<hashMap[i][j]<<" ";
         }
         cout<<endl;
    }
    return 0;
}
