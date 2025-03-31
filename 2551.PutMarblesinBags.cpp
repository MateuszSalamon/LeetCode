class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {

        int size = weight.size();
        vector<int> pairs(weight.size()-1);
        for(int i = 0; i < weights.size()-1; i++)
        {
            pairs[i] += weights.at(i)+weights.at(i+1);
        }

        sort(pairs.begin(), pairs.end());

        long long retval= 0;
        for(int i = 0; i<k-1; i++)
        {
            retval += paris.at(weight.size()-1-i) - pairs.at(i);
        }

        return retval;
    }
};
