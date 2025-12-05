#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countPartitions(vector<int> &nums)
    {
        int imp = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            imp += nums[i] % 2;
        }
        return (imp % 2 == 0) ? nums.size() - 1 : 0;
    }
};