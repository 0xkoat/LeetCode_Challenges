#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int swimInWater(vector<vector<int>> &grid)
    {
        int n = grid.size();
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;
        int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

        pq.push({grid[0][0], 0, 0});
        visited[0][0] = true;

        while (!pq.empty())
        {
            auto [time, r, c] = pq.top();
            pq.pop();
            if ((r == n - 1) and (c == n - 1))
            {
                return time;
            }
            for (auto &dr : directions)
            {
                int nr = r + dr[0];
                int nc = c + dr[1];
                if (nr >= 0 && nr < n && nc >= 0 && nc < n && !visited[nr][nc])
                {
                    visited[nr][nc] = true;
                    int newTime = max(time, grid[nr][nc]);
                    pq.push({newTime, nr, nc});
                }
            }
        }
        return 0;
    }
};