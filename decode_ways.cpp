#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> memory;
    int paths(int i, string s)
    {
        if (i >= s.size())
            return 1;
        if (memory[i] != -1)
            return memory[i];
        int result = 0;
        if ((int(s[i]) - '0') == 0)
            result = 0;
        else if (((int(s[i]) - '0' != 0)) && (i + 1 < s.size()) && (((int(s[i]) - '0') * 10 + (int(s[i + 1]) - '0')) <= 26))
            result = paths(i + 1, s) + paths(i + 2, s);
        else
            result = paths(i + 1, s);
        return memory[i] = result;
    }

    int numDecodings(string s)
    {
        return paths(0, s);
    }
};