#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSquare = 0;

    int visit(int i, int j, vector<vector<char>> &matrix, vector<vector<int>> &dp)
    {
        if (i >= matrix.size() || j >= matrix[0].size())
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];

        int right = visit(i, j + 1, matrix, dp);
        int down = visit(i + 1, j, matrix, dp);
        int diag = visit(i + 1, j + 1, matrix, dp);

        if (matrix[i][j] == '1')
        {
            dp[i][j] = 1 + min({right, down, diag});
            maxSquare = max(maxSquare, dp[i][j]);
        }
        else
        {
            dp[i][j] = 0;
        }

        return dp[i][j];
    }

    int maximalSquare(vector<vector<char>> &matrix)
    {
        if (matrix.empty() || matrix[0].empty())
            return 0;
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> dp(m, vector<int>(n, -1));
        visit(0, 0, matrix, dp);
        return maxSquare * maxSquare;
    }
};
