class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        int minrank = ranks[0];
        int maxrank = ranks[0];

        for(int i : ranks)
        {
            minrank = min(minrank, i);
            maxrank = max(maxrank, i);
        }

        vector<int>mechfreq(maxrank + 1);
        for(int j : ranks)
        {
            minrank = min(minrank, j);
            mechfreq[j]++;
        }

        long long lowtime = 1;
        long long hightime = 1LL * minrank * cars * cars;

        while (lowtime < hightime)
        {
            long long avg = (lowtime + hightime)/2;
            long long carsrepaired = 0;

            for(int i = 1; i <= maxrank; i++)
            {
                carsrepaired += mechfreq[i] * (long long)sqrt(avg/ (long long)i);
            }

            if(carsrepaired >= cars)
            {
                hightime = avg;
            }
            else
            {
                lowtime = avg + 1;
            }
        }
        return lowtime;
    }
};
