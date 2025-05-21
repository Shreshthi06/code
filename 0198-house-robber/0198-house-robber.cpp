class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];
        if(nums.size() == 2) return max(nums[0], nums[1]);

        int sum = 0;
        vector<int> dp(nums.size());
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        int i = 2;
        while(i < nums.size()) {
            dp[i] = max(dp[i-1], dp[i-2] + nums[i]);
            i++;
        }

        sum = dp[nums.size() - 1];
        return sum;
    }
};
