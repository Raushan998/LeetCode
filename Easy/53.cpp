class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur_max=nums[0],maxso_far=nums[0];
        for(int i=1;i<nums.size();i++){
            cur_max=max(nums[i],cur_max+nums[i]);
            maxso_far=max(maxso_far,cur_max);
        }
        return maxso_far;
    }
};
