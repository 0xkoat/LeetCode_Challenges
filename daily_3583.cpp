#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int specialTriplets(vector<int> &nums)
    {
        const int MOD = 1000000007;
        unordered_map<int, vector<int>> pos;

        for (int i = 0; i < nums.size(); i++)
            pos[nums[i]].push_back(i);

        long long res = 0;

        if (pos.count(0))
        {
            long long n = pos[0].size();
            if (n >= 3)
            {
                res = (res + n * (n - 1) * (n - 2) / 6) % MOD;
            }
        }

        for (auto &p : pos)
        {
            long long mid = p.first;
            if (mid == 0)
                continue;

            long long outer = mid * 2;
            if (!pos.count(outer))
                continue;

            auto &mid_idx = p.second;
            auto &out_idx = pos[outer];

            for (int j : mid_idx)
            {

                long long left = lower_bound(out_idx.begin(), out_idx.end(), j) - out_idx.begin();

                long long right = out_idx.size() - left;

                res = (res + (left * right) % MOD) % MOD;
            }
        }

        return (int)res;
    }
};
