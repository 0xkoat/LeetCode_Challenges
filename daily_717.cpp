#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isOneBitCharacter(vector<int> &bits)
    {
        int i = 0;
        if (bits.size() == 1 && bits[0] == 0)
            return true;
        while (i < bits.size())
        {
            if (bits[i] == 1)
                i += 2;
            else
                i++;
            if (i == bits.size() - 1)
                return true;
        }
        return false;
    }
};