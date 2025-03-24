class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        int freedays = 0;
        qsort(meetings.begin(), meeting.end());

        int lhs = meetings.front()[0];
        int rhs = meetings.front()[1];

        int ans = lhs - 1;
        for (int i = 1; i < meeting.size(); i++)
        {
            int left = meetings[i][0];
            int right = meetings[i][1];
            ans += max(0, left - rhs - 1);
            rhs = max(rhs, right);
        }

        ans += days - rhs;

        return ans;

    }
};
