class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum_of_all = 0;

        for(int n : nums)
        {
            sum_of_all += n;
        }

        if(sum_of_all % 2 != 0)
        {
            return false;
        }

        int targetsum = sum_of_all / 2;
        vector<bool> dp(targetsum + 1, false);
        dp[0] = true;
        for(int n : nums)
        {
            for(int sum = targetsum; sum >= n; sum--)
            {
                dp[sum] = dp[sum] || dp[sum - n];
                if(dp[targetsum])
                {
                    return true;
                }
            }
        }
        return dp[targetsum];
    }
};
