class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {

        int size = weights.size();
        vector<int> pairs(weights.size()-1);
        for(int i = 0; i < weights.size()-1; i++)
        {
            pairs[i] += weights.at(i)+weights.at(i+1);
        }

        sort(pairs.begin(), pairs.end());

        long long retval= 0;
        for(int i = 0; i<k-1; i++)
        {
            retval += pairs.at(weights.size()-2-i) - pairs.at(i);
        }

        return retval;
    }
};
