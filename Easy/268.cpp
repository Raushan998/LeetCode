class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int num=nums.size();
        int sum=((num)*(num+1))/2;
        for(auto x:nums)
          sum-=x;
        return sum;
    }
};
