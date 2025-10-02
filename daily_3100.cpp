#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxBottlesDrunk(int numBottles, int numExchange)
    {
        int result = numBottles;

        while (numBottles >= numExchange)
        {
            int newBottles = numBottles - numExchange;
            result += 1;
            numBottles = newBottles + 1;
            numExchange += 1;
        }
        return result;
    }
};