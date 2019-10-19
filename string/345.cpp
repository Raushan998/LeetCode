#include<iostream>
#include<cstring>
#include<unordered_set>
#include<vector>
using namespace std;
class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> hashset({'a', 'e', 'i', 'o', 'u','A','E','I','O','U'});
        vector<int> candidates;
        for(int i = 0; i < s.size(); ++i) {
            if(hashset.find(s[i]) != hashset.end()) {
                candidates.push_back(i);
            }
        }
        int left = 0, right = candidates.size()-1;
        string result = s;
        while(left < right) {
            swap(result[candidates[left]], result[candidates[right]]);
            ++left;--right;
        }
        return result;
    }
};
int main(){
    Solution s;
    string temp;
    getline(cin,temp);
    cout<<s.reverseVowels(temp)<<endl;
    return 0;
}
