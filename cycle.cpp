#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool dfs(int node, int parent, vector<int> adj[], vector<bool> &visited)
    {
        visited[node] = true;
        for (auto adjnode : adj[node])
        {
            if (!visited[node])
            {
                if (dfs(adjnode, node, adj, visited))
                    return true;
            }
            else if (adjnode != parent)
                return true;
        }
        return false;
    }

    vector<int> findRedundantConnection(vector<vector<int>> &edges)
    {
        int n = edges.size();
        vector<int> adj[n];
        for (int i = 0; i < n; i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            vector<bool> visited(n, false);
            if (dfs(edges[i][0], -1, adj, visited))
                return edges[i];
        }
        return {};
    }
};