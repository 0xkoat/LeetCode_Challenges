#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countOperations(int num1, int num2)
    {
        int counter = 0;
        int big, small, temp;
        while (num1 && num2)
        {
            big = max(num1, num2);
            small = min(num1, num2);
            temp = big - small;
            (num1 == big) ? num1 = temp : num2 = temp;
            counter++;
        }
        return counter;
    }
};