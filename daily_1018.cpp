#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<bool> prefixesDivBy5(vector<int> &nums)
    {
        int n = nums.size();
        vector<bool> res(n);
        int val = 0;
        for (int i = 0; i < n; i++)
        {
            val = (val * 2 + nums[i]) % 5;
            res[i] = (val == 0);
        }
        return res;
    }
};