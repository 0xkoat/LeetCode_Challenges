#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countCollisions(string directions)
    {
        int n = directions.size();
        int i = 0, j = n - 1;

        while (i < n && directions[i] == 'L')
            i++;

        while (j >= 0 && directions[j] == 'R')
            j--;

        int res = 0;
        for (int k = i; k <= j; k++)
            if (directions[k] != 'S')
                res++;

        return res;
    }
};