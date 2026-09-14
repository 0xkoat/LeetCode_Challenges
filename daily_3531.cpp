#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countCoveredBuildings(int n, vector<vector<int>> &buildings)
    {
        vector<int> maxRow(n + 1);
        vector<int> minRow(n + 1, n + 1);
        vector<int> maxColumn(n + 1);
        vector<int> minColumn(n + 1, n + 1);

        for (auto &p : buildings)
        {
            int x = p[0], y = p[1];
            maxRow[y] = max(maxRow[y], x);
            minRow[y] = min(minRow[y], x);
            maxColumn[x] = max(maxColumn[x], y);
            minColumn[x] = min(minColumn[x], y);
        }

        int res = 0;
        for (auto &p : buildings)
        {
            int x = p[0], y = p[1];
            if (x > minRow[y] && x < maxRow[y] && y > minColumn[x] && y < maxColumn[x])
                res++;
        }
        return res;
    }
};