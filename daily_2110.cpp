#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long getDescentPeriods(vector<int> &prices)
    {
        long long res = 0;
        int counter = 1;
        for (int i = 0; i < prices.size() - 1; i++)
        {
            if (prices[i + 1] == prices[i] - 1)
                counter++;

            else
            {
                res += (long long)counter * (1 + counter) / 2;
                counter = 1;
            }
        }
        res += (long long)counter * (1 + counter) / 2;
        return res;
    }
};