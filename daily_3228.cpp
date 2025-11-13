#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxOperations(string s)
    {
        int ones = 0, result = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                ones++;
            }
            else
            {
                if (i + 1 == s.size() || s[i + 1] == '1')
                {
                    result += ones;
                }
            }
        }

        return result;
    }
};