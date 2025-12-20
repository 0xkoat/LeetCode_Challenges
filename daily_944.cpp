#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minDeletionSize(vector<string> &strs)
    {
        int res = 0;
        unordered_map<int, string> columns;

        for (int i = 0; i < strs.size(); i++)
        {
            for (int j = 0; j < strs[i].size(); j++)
            {
                columns[j] += strs[i][j];
            }
        }

        for (auto p : columns)
        {
            string ordered = p.second;
            sort(ordered.begin(), ordered.end());
            if (ordered != p.second)
                res++;
        }

        return res;
    }
};