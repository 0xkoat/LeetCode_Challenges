#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<bool>> bfsPacific(vector<vector<int>> &heights)
    {
        int r = heights.size();
        int c = heights[0].size();
        vector<vector<bool>> visited(r, vector<bool>(c, false));
        queue<pair<int, int>> q;

        for (int i = 0; i < r; i++)
        {
            q.push({i, 0});
            visited[i][0] = true;
        }
        for (int j = 0; j < c; j++)
        {
            q.push({0, j});
            visited[0][j] = true;
        }

        int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        while (!q.empty())
        {
            auto [x, y] = q.front();
            q.pop();
            for (auto &d : directions)
            {
                int nx = x + d[0];
                int ny = y + d[1];
                if ((nx < 0) or (ny < 0) or (nx >= r) or (ny >= c))
                    continue;
                if (visited[nx][ny])
                    continue;
                if (heights[nx][ny] >= heights[x][y])
                {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
        return visited;
    }
    vector<vector<bool>> bfsAtlantic(vector<vector<int>> &heights)
    {
        int r = heights.size();
        int c = heights[0].size();
        vector<vector<bool>> visited(r, vector<bool>(c, false));
        queue<pair<int, int>> q;

        for (int i = 0; i < r; i++)
        {
            q.push({i, c - 1});
            visited[i][c - 1] = true;
        }
        for (int j = 0; j < c; j++)
        {
            q.push({r - 1, j});
            visited[r - 1][j] = true;
        }

        int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        while (!q.empty())
        {
            auto [x, y] = q.front();
            q.pop();
            for (auto &d : directions)
            {
                int nx = x + d[0];
                int ny = y + d[1];
                if ((nx < 0) or (ny < 0) or (nx >= r) or (ny >= c))
                    continue;
                if (visited[nx][ny])
                    continue;
                if (heights[nx][ny] >= heights[x][y])
                {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
        return visited;
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>> &heights)
    {
        vector<vector<bool>> pacific = bfsPacific(heights);
        vector<vector<bool>> atlantic = bfsAtlantic(heights);
        vector<vector<int>> result;

        for (int i = 0; i < heights.size(); i++)
        {
            for (int j = 0; j < heights[0].size(); j++)
            {
                if (pacific[i][j] && atlantic[i][j])
                {
                    result.push_back({i, j});
                }
            }
        }
        return result;
    }
};