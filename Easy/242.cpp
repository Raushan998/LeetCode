class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>my_map,other_map;
        if(s.length()!=t.length())
            return false;
        for(auto it:s)
            my_map[it]++;
        for(auto it:t)
            other_map[it]++;
        for(auto it:s){
            if(my_map[it]==other_map[it])
                continue;
            else
                return false;
        }
        return true;
    }
};
