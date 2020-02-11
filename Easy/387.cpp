class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>my_map;
        for(int i=0;i<s.length();i++){
            my_map[s[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(my_map[s[i]]==1)
                return i;
        }
        return -1;
    }
};
