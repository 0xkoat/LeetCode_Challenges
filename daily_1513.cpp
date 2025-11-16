#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numSub(string s)
    {
        vector<int> zeroes;
        vector<int> ones;
        long long total = 0;
        int res;
        int n = s.size();

        if (s[0] == '1')
            zeroes.push_back(-1);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zeroes.push_back(i);
        }
        if (s[n - 1] == '1')
        {
            zeroes.push_back(n);
        }

        for (int i = 1; i < zeroes.size(); i++)
        {
            ones.push_back(zeroes[i] - zeroes[i - 1] - 1);
        }

        for (int i = 0; i < ones.size(); i++)
        {
            if (ones[i] % 2 == 0)
                total += (ones[i] * ((ones[i] / 2) + 0.5));
            else
                total += (ones[i] * ((ones[i] / 2) + 1));
        }

        long long x = pow(10, 9) + 7;
        res = total % x;
        return res;
    }
};