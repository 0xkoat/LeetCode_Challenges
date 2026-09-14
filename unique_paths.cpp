#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> memory;
    int roads(int i, int j, int m, int n)
    {
        if (i == m - 1 && j == n - 1)
            return 1;

        if (memory[i][j] != -1)
            return memory[i][j];

        int paths = 0;

        if (i == m - 1 && j != n - 1)
            paths = roads(i, j + 1, m, n);
        else if (i != m - 1 && j == n - 1)
            paths = roads(i + 1, j, m, n);
        else
            paths = roads(i, j + 1, m, n) + roads(i + 1, j, m, n);

        return memory[i][j] = paths;
    }

    int uniquePaths(int m, int n)
    {
        memory = vector<vector<int>>(m, vector<int>(n, -1));
        return roads(0, 0, m, n);
    }
};