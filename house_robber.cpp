#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> numbers;
    vector<int> memo;

    int visit(vector<int> &numbers, int i, vector<int> &memo)
    {
        if (i >= numbers.size())
        {
            return 0;
        }
        if (memo[i] != -1)
            return memo[i];
        int path1 = visit(numbers, i + 2, memo);
        int path2 = visit(numbers, i + 3, memo);

        memo[i] = numbers[i] + max(path1, path2);
        return memo[i];
    }
    int rob(vector<int> &nums)
    {
        memo = vector<int>(nums.size(), -1);
        int road1 = visit(nums, 0, memo);
        int road2 = visit(nums, 1, memo);
        return max(road1, road2);
    }
};