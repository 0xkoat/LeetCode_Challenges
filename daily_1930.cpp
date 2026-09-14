#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countPalindromicSubsequence(string s)
    {

        unordered_map<char, vector<int>> indices;
        int res;

        for (int i = 0; i < s.size(); i++)
        {
            indices[s[i]].push_back(i);
        }

        for (auto &p : indices)
        {
            vector<int> pos = p.second;
            int n = pos.size();
            unordered_set<char> pals;
            if (n > 1)
            {
                for (int i = pos[0] + 1; i < pos[n - 1]; i++)
                {
                    pals.insert(s[i]);
                }
            }
            res += pals.size();
        }
        return res;
    }
};