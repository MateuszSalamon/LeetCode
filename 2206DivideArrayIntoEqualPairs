class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<int> storage;
        unordered_map<int, int> freq;

        for(int num : nums)
        {
            freq[num]++;
        }

        for(pair<int,int> i : freq)
        {
            if(i.second % 2 != 0)
            {
                return false;
            }
        }
        return true;
    }
};
