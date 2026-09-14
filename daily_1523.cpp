#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countOdds(int low, int high)
    {
        return ((high - low - (high % 2) - (low % 2)) / 2) + (high % 2) + (low % 2);
    }
};
