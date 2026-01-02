#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int repeatedNTimes(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> recurrence;
        for (int num : nums)
        {
            recurrence[num]++;
            if (recurrence[num] == 2)
                return num;
        }
        return 0;
    }
};