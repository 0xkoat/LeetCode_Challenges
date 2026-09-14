#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minCost(string colors, vector<int> &neededTime)
    {
        int result = 0, i = 0;
        while (i < colors.size())
        {
            char ref = colors[i];
            vector<int> times;
            times.push_back(neededTime[i]);
            while (colors[i + 1] == ref && i < colors.size())
            {
                i++;
                times.push_back(neededTime[i]);
            }
            if (times.size() > 1)
            {
                sort(times.rbegin(), times.rend());
                for (int j = 1; j < times.size(); j++)
                {
                    result += times[j];
                }
            }
            i++;
        }
        return result;
    }
};