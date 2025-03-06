class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>retval;
        for(int i = 1; i < 50; i++)
        {
            int counter_a = std::count(grid.begin(), grid.end(), i);
            if(counter_a == 2)
            {
                retval[1] = i;
            }

            if(counter_a == 0)
            {
                retval[0] = i;
            }

            if((retval[0] != 0) && (retval[1] != 0))
            {
                return retval;
            }

        }
        return retval;
    }
};
