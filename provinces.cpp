#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    unordered_map<int, vector<int>> adj;
    vector<bool> visited;

    int dfs(unordered_map<int, vector<int>> &adj, int a, vector<bool> &visited)
    {
        visited[a] = true;
        for (auto &node : adj[a])
        {
            if (!visited[node])
            {
                dfs(adj, node, visited);
            }
        }

        return 1;
    }

    int findCircleNum(vector<vector<int>> &isConnected)
    {
        int n = isConnected.size();
        unordered_map<int, vector<int>> adj;
        vector<bool> visited(n, false);
        for (int i = 0; i < n; i++)
        {
            adj[i] = {};
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && isConnected[i][j] == 1)
                {
                    adj[i].push_back(j);
                }
            }
        }
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
                result += dfs(adj, i, visited);
        }
        return result;
    }
};