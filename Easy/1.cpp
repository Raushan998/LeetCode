class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
       unordered_map<int,int>mp;
       vector<int>vect;
       for(int i=0;i<nums.size();i++){
          if(mp.find(target-nums[i])!=mp.end()){
            vect.push_back(i);
            vect.push_back(mp[target-nums[i]]);
            break;
          }
          else 
            mp[nums[i]]=i;
       }
      sort(vect.begin(),vect.end());
      return vect;
    }
};
