#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        unordered_map<string, int> values;
        values["--X"] = -1;
        values["X--"] = -1;
        values["++X"] = 1;
        values["X++"] = 1;
        int result = 0;
        for (int i = 0; i < operations.size(); i++)
        {
            result += values[operations[i]];
        }
        return result;
    }
};