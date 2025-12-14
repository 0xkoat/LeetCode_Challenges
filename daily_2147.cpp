#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numberOfWays(string corridor)
    {
        const int mod = 1000000007;
        long long res = 1;
        int seats = 0, plants = 0;
        bool counting = false;

        for (char c : corridor)
        {
            if (c == 'S')
            {
                seats++;
                if (seats > 2 && seats % 2 == 1)
                {
                    res = (res * (plants + 1)) % mod;
                    plants = 0;
                }
                counting = (seats % 2 == 0);
            }
            else if (counting)
                plants++;
        }
        return (seats % 2 == 0 && seats > 0) ? res : 0;
    }
};