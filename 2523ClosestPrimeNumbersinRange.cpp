class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        int upLim = right;
        vector<int>SOEarr = sieve(upLim);
        vector<int>primestore;

        for(int i = left; i <= right; i++)
        {
            if(SOEarr[i] == 1)
            {
                primestore.push_back(num);
            }
        }

        if(primestore.size < 2)
        {
            return vector<int>{-1, -1};
        }

        int min_diff = INT_MAX;
        vector<int> closePair(2,-1);

        for(int i = 1; i < primestore.size(); i++)
        {
            int diff = primestore[i] - primestore[i-1];
            if(diff < min_diff)
            {
                min_diff = diff;
                closePair[0] = primestore[i-1];
                closePair[1] = primestore[i];
            }
        }

        return closePair;
    }
private:
    vectore<int> sieve(int upLim)
    {
        vector<int> sievearr(upLim + 1, 1);

        sievearr[0] = 0;
        sievearr[1] = 0;

        for(int n = 2; n*n < upLim; n++)
        {
            if(sievearr[n]==1)
            {
                for(int mult = n * n; mult < upLim; mult+=n)
                {
                    sievearr[mult] = 0;
                }
            }
        }
        return sievearr;
    }
};
