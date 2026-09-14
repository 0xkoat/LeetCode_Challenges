#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int totalMoney(int n)
    {
        map<int, int> totals = {
            {1, 1}, {2, 3}, {3, 6}, {4, 10}, {5, 15}, {6, 21}, {7, 28}};
        int x = n / 7;
        int y = n % 7;
        int result = 0;
        for (int i = 0; i < x; i++)
        {
            result += totals[7] + 7 * i;
        }
        if (y != 0)
            result += totals[y] + y * x;
        return result;
    }
};