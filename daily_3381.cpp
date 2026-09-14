#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long maxSubarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<long long> prefixSum(n + 1);
        for (int i = 0; i < n; i++)
        {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }

        long long result = LLONG_MIN;
        for (int i = 0; i < k; i++)
        {
            long long current = i + k <= n ? prefixSum[i + k] - prefixSum[i] : LLONG_MIN;
            result = max(result, current);
            for (int j = i + 2 * k; j <= n; j += k)
            {
                long long sum = prefixSum[j] - prefixSum[j - k];
                current = max(current + sum, sum);
                result = max(result, current);
            }
        }

        return result;
    }
};