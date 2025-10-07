#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> avoidFlood(vector<int> &rains)
    {
        int n = rains.size();
        vector<int> ans(n, 1);
        unordered_map<int, int> lakes;
        vector<int> dryDays;

        for (int i = 0; i < n; i++)
        {
            if (rains[i] != 0)
            {
                int lake = rains[i];
                ans[i] = -1;
                if (lakes.count(lake))
                {
                    int last_day = lakes[lake];
                    bool dried = false;
                    for (int j = 0; j < dryDays.size(); j++)
                    {
                        if (dryDays[j] > last_day)
                        {

                            ans[dryDays[j]] = lake;
                            dryDays.erase(dryDays.begin() + j);
                            dried = true;
                            break;
                        }
                    }
                    if (!dried)
                    {
                        return {};
                    }
                }
                lakes[lake] = i;
            }
            else
            {
                dryDays.push_back(i);
            }
        }
        return ans;
    }
};
