#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int num1Calculator(string row)
    {
        int counter = 0;
        for (int j = 0; j < row.size(); j++)
        {
            (row[j] == '1') ? counter++ : counter += 0;
        }
        return counter;
    }

    int numberOfBeams(vector<string> &bank)
    {
        int n = bank[0].size();
        string ref = "";
        for (int i = 0; i < n; i++)
            ref += "0";
        vector<int> indexes;
        for (int i = 0; i < bank.size(); i++)
        {
            if (bank[i] != ref)
            {
                indexes.push_back(i);
            }
        }
        if (indexes.size() <= 1)
            return 0;
        int result = 0;
        for (int i = 0; i < indexes.size() - 1; i++)
        {
            int row_1 = num1Calculator(bank[indexes[i]]);
            int row_2 = num1Calculator(bank[indexes[i + 1]]);
            result += row_1 * row_2;
        }
        return result;
    }
};