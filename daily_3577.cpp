#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countPermutations(vector<int> &complexity)
    {
        int n = complexity.size();
        int less = complexity[1];
        for (int i = 1; i < n; i++)
        {
            if (complexity[i] < less)
                less = complexity[i];
        }
        if (less <= complexity[0])
            return 0;

        int mod = 1000000007;
        int res = 1;
        for (int i = 2; i < n; i++)
        {
            res = ((long long)res * i) % mod;
        }
        return res;
    }
};