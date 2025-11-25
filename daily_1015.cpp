#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int smallestRepunitDivByK(int k)
    {
        if (k % 2 == 0 || k % 5 == 0)
            return -1;

        int n = 1 % k;
        int length = 1;
        while (n != 0)
        {
            n = (n * 10 + 1) % k;
            length++;
            if (length > k)
                return -1;
        }
        return length;
    }
};
