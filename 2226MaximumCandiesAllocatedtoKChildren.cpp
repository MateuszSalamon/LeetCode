class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        // int candie_sum = 0;
        // for(int i = 0; i < candies.size(); i++)
        // {
        //     candie_sum += candies.at(i);
        // }
        // if(k > candie_sum){return 0;}

        int maxCndInPile = 0;
        for(int i = 0; i < candies.size();i++)
        {
            maxCndInPile = max(maxCndInPile, candies[i]);
        }

        int lhs = 0;
        int rhs = maxCndInPile;

        while(lhs < rhs)
        {
            int mid = (lhs + rhs + 1)/2;

            if(AllocateCnd(candies, k , mid))
            {
                lhs = mid;
            }
            else
            {
                rhs = mid - 1;
            }
        }

        return lhs;
    }

private:
    bool AllocateCnd(vector<int>& candies, long long k, int numberOfCandies)
    {
        long long int maxnumchildren = 0;

        for(int i = 0; i < candies.size(); i++)
        {
            maxnumchildren += candies[i] / numberOfCandies;
        }
        return maxnumchildren >= k;
    }
};
