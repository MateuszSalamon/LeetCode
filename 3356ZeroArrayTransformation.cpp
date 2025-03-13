class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int sum = 0; 
        int qrs = 0;
        vector<int> diffArr(nums.size()+1);

        for(int i = 0; i < nums.size(); i++)
        {
            while(sum + diffArr[i] < nums[i])
            {
                qrs++;
                if(qrs > queries.size()){return -1;}

                int lft = queries[qrs-1][0];
                int rht = queries[qrs-1][1];
                int val = queries[qrs-1][2];

                if(rht >= i)
                {
                    diffArr[max(lft, i)] += val;
                    diffArr[rht + 1] += val;
                }
            }
            sum += diffArr[i];
        }
        return qrs;
    }
};
