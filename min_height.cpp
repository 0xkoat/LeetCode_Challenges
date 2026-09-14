#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>> &edges)
    {
        if (n == 1)
            return {0};

        vector<vector<int>> adjacents(n);
        vector<int> degree(n, 0);

        for (auto &p : edges)
        {
            adjacents[p[0]].push_back(p[1]);
            adjacents[p[1]].push_back(p[0]);
            degree[p[0]]++;
            degree[p[1]]++;
        }

        vector<int> leaves;
        for (int i = 0; i < n; i++)
        {
            if (degree[i] == 1)
            {
                leaves.push_back(i);
            }
        }
        int remaining_nodes = n;
        while (remaining_nodes > 2)
        {
            vector<int> new_leaves;
            remaining_nodes -= leaves.size();
            for (auto &leaf : leaves)
            {
                for (auto &neighbor : adjacents[leaf])
                {
                    degree[neighbor] -= 1;
                    if (degree[neighbor] == 1)
                        new_leaves.push_back(neighbor);
                }
            }
            leaves = new_leaves;
        }
        return leaves;
    }
};