class Solution {
public:
    int majorityElement(vector<int>& nums) {
      map<int,int>m;
      for(auto k:nums)
        m[k]++;
      int count=INT_MIN,element;
      for(auto k:m){
        if(count<k.second){
          count=k.second;
          element=k.first;
        }
      }
      return element;
    }
};
