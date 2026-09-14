#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int smallestNumber(int n)
    {
        int power = 0;
        int x = pow(2, power);
        while (x < n)
        {
            power++;
            x += pow(2, power);
        }
        return x;
    }
};