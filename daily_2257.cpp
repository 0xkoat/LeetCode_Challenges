#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countUnguarded(int m, int n, vector<vector<int>> &guards, vector<vector<int>> &walls)
    {
        vector<vector<int>> marked(m, vector<int>(n, 1));
        for (auto &p : walls)
        {
            marked[p[0]][p[1]] = 0;
        }

        for (auto &p : guards)
        {
            marked[p[0]][p[1]] = 0;
        }
        int guarded = 0;
        for (auto &p : guards)
        {
            for (int i = p[0] + 1; i < m; i++)
            {
                if (!marked[i][p[1]])
                    break;
                else if (marked[i][p[1]] == -1)
                    continue;
                else
                {
                    guarded++;
                    marked[i][p[1]] = -1;
                }
            }

            for (int i = p[0] - 1; i >= 0; i--)
            {
                if (!marked[i][p[1]])
                    break;
                else if (marked[i][p[1]] == -1)
                    continue;
                else
                {
                    guarded++;
                    marked[i][p[1]] = -1;
                }
            }

            for (int i = p[1] + 1; i < n; i++)
            {
                if (!marked[p[0]][i])
                    break;
                else if (marked[p[0]][i] == -1)
                    continue;
                else
                {
                    guarded++;
                    marked[p[0]][i] = -1;
                }
            }

            for (int i = p[1] - 1; i >= 0; i--)
            {
                if (!marked[p[0]][i])
                    break;
                else if (marked[p[0]][i] == -1)
                    continue;
                else
                {
                    guarded++;
                    marked[p[0]][i] = -1;
                }
            }
        }
        int result = (m * n) - guarded - guards.size() - walls.size();
        return result;
    }
};