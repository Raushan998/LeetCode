class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>my_map;
        for(auto it:nums){
            my_map[it]++;
            if(my_map[it]>1)
                return true;
        }
        return false;
    }
};
