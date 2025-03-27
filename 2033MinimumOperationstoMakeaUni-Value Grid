class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        
        vector<int>Array;
        int retval = 0;

        for(int i = 0; i < grid.size()[0]; i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                Array.push_back(grid[i][j]); 
            }
        }

        nth_element(Array.begin(), Array.begin() + Array.size()/2, Array.end());

        int commonNo = Array[Array.size()/2];

        for (auto a: Array)
        {
            if (a % x != commonNo % x){return -1;}
            retval += abs(commonNo - a)/x;
        }
        return retval;
    }
};
