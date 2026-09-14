#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findSmallestInteger(vector<int> &nums, int value)
    {
        unordered_map<int, int> counter;
        for (int i = 0; i < nums.size(); i++)
        {
            counter[(nums[i] % value + value) % value] += 1;
        }
        int result = 0;
        while (true)
        {
            if (counter[result % value] > 0)
            {
                counter[result % value]--;
                result += 1;
            }
            else
                break;
        }
        return result;
    }
};