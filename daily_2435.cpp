#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<vector<int>>> dp;
    int mod = 1000000007;
    int m, n, K;
    int pathTravesal(int i, int j, int r, vector<vector<int>> &grid)
    {
        if (i == m - 1 && j == n - 1)
        {
            int newr = (r + grid[i][j]) % K;
            return newr == 0;
        }

        int &ans = dp[i][j][r];
        if (ans != -1)
            return ans;

        ans = 0;
        int newr = (r + grid[i][j]) % K;

        if (j + 1 < n)
            ans = (ans + pathTravesal(i, j + 1, newr, grid)) % mod;

        if (i + 1 < m)
            ans = (ans + pathTravesal(i + 1, j, newr, grid)) % mod;

        return ans;
    }

    int numberOfPaths(vector<vector<int>> &grid, int k)
    {
        m = grid.size();
        n = grid[0].size();
        K = k;
        dp = vector<vector<vector<int>>>(m, vector<vector<int>>(n, vector<int>(K, -1)));
        return pathTravesal(0, 0, 0, grid);
    }
};