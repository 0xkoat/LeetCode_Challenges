#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int x_Sum(vector<int> numbers, int n)
    {
        unordered_map<int, int> repetitions;
        priority_queue<pair<int, int>> occurences;

        int total1 = 0, total2 = 0, counter = n;

        for (int j = 0; j < numbers.size(); j++)
        {
            total1 += numbers[j];
            repetitions[numbers[j]]++;
        }
        if (repetitions.size() < n)
            return total1;

        for (auto &p : repetitions)
            occurences.push({p.second, p.first});

        while (counter)
        {
            pair<int, int> val = occurences.top();
            total2 += val.first * val.second;
            occurences.pop();
            counter--;
        }
        return total2;
    }

    vector<int> findXSum(vector<int> &nums, int k, int x)
    {
        vector<int> result;
        for (int i = 0; i + k <= nums.size(); i++)
        {
            vector<int> sub(nums.begin() + i, nums.begin() + i + k);
            result.push_back(x_Sum(sub, x));
        }
        return result;
    }
};