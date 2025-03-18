class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int niceBits = 0;
        int lhs = 0
        int maxlength = 0;

        for(int rhs = 0; rhs < nums.size(); rhs++)
        {
            while((niceBits & nums[rhs])!= 0)
            {
                niceBits ^= nums[lhs];
                lhs++;
            }
            niceBits |= nums[rhs];
            maxlength = std::max(maxlength, rhs - lhs + 1);
        }
        return maxlength;
    }
};
