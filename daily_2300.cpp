#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
    {

        vector<int> Result;
        sort(potions.begin(), potions.end());

        for (int i = 0; i < spells.size(); i++)
        {
            int left = 0, right = potions.size() - 1, half = (left + right) / 2;
            while (left <= right)
            {
                if ((long long)spells[i] * (long long)potions[half] >= success)
                {
                    right = half - 1;
                    half = (left + right) / 2;
                }
                else
                {
                    left = half + 1;
                    half = (left + right) / 2;
                }
            }
            Result.push_back(potions.size() - left);
        }
        return Result;
    }
};