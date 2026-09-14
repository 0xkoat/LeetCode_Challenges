#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxIncreasingSubarrays(vector<int> &nums)
    {
        int n = nums.size();
        vector<pair<int, int>> subarrays;
        int start = 0;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] <= nums[i - 1])
            {
                subarrays.push_back({start, i});
                start = i;
            }
        }
        subarrays.push_back({start, n - 1});

        int result = 0;
        for (auto &sub : subarrays)
        {
            int len = sub.second - sub.first + 1;
            result = max(result, len / 2);
        }

        for (int i = 0; i < subarrays.size() - 1; i++)
        {
            auto [l1, r1] = subarrays[i];
            auto [l2, r2] = subarrays[i + 1];
            if (r1 + 1 == l2)
            {
                int len1 = r1 - l1 + 1;
                int len2 = r2 - l2 + 1;
                result = max(result, min(len1, len2));
            }
        }
        return result;
    }
};