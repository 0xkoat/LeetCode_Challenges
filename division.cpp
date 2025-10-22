#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double bfs(string source, string destination, unordered_map<string, vector<pair<string, double>>> &adj)
    {
        unordered_map<string, bool> visited;
        queue<pair<string, double>> q;

        q.push({source, 1.0});
        visited[source] = true;

        while (!q.empty())
        {
            pair<string, double> node_infos = q.front();
            q.pop();
            string node = node_infos.first;
            double term = node_infos.second;

            if (node == destination)
                return term;

            if (!adj.count(node))
                continue;

            for (pair<string, double> neighbor_info : adj[node])
            {
                string neighbor_name = neighbor_info.first;
                double neighbor_term = neighbor_info.second;
                if (!visited[neighbor_name])
                {
                    visited[neighbor_name] = true;
                    q.push({neighbor_name, (term * neighbor_term)});
                }
            }
        }
        return -1;
    }

    vector<double> calcEquation(vector<vector<string>> &equations, vector<double> &values, vector<vector<string>> &queries)
    {
        int n = equations.size();
        unordered_map<string, vector<pair<string, double>>> adjacents;

        for (int i = 0; i < n; i++)
        {
            string num1 = equations[i][0];
            string num2 = equations[i][1];
            adjacents[num1].push_back({num2, values[i]});
            adjacents[num2].push_back({num1, 1.0 / values[i]});
        }

        vector<double> result;
        for (vector<string> &operation : queries)
        {
            if (!adjacents.count(operation[0]) || !adjacents.count(operation[1]))
            {
                result.push_back(-1.0);
            }
            else
            {
                double test = bfs(operation[0], operation[1], adjacents);
                result.push_back(test);
            }
        }
        return result;
    }
};