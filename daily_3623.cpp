#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countTrapezoids(vector<vector<int>> &points)
    {
        unordered_map<int, int> ys;
        for (int i = 0; i < points.size(); i++)
        {
            ys[points[i][1]]++;
        }

        vector<long long> vertices;
        for (auto &p : ys)
        {
            if (p.second - 1 > 0)
            {
                long long n = p.second;
                long long f = (n * (n - 1)) / 2;
                vertices.push_back(f);
            }
        }

        long long res = 0;
        long long x = accumulate(vertices.begin(), vertices.end(), 0LL);
        for (int i = 0; i < vertices.size(); i++)
        {
            x -= vertices[i];
            res += (vertices[i] * x);
        }
        return res % 1000000007;
    }
};