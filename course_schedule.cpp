#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {

        vector<vector<int>> adj(numCourses);
        vector<int> dependence(numCourses, 0);

        for (auto &p : prerequisites)
        {
            int course = p[0];
            int prereq = p[1];
            adj[prereq].push_back(course);
            dependence[course]++;
        }

        queue<int> q;
        for (int i = 0; i < numCourses; i++)
        {
            if (dependence[i] == 0)
                q.push(i);
        }

        int visited = 0;
        while (!q.empty())
        {
            int course = q.front();
            q.pop();
            visited++;

            for (int next : adj[course])
            {
                dependence[next]--;
                if (dependence[next] == 0)
                    q.push(next);
            }
        }
        return visited == numCourses;
    }
};