#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool OrderVerifier(vector<int> &arr_1, vector<int> &arr_2)
    {
        bool test = true;
        for (int i = 0; i < arr_1.size() - 1; i++)
        {
            if (!((arr_1[i] < arr_1[i + 1]) && (arr_2[i] < arr_2[i + 1])))
            {
                test = false;
            }
        }
        return test;
    }

    bool hasIncreasingSubarrays(vector<int> &nums, int k)
    {
        if (k == 1)
            return true;
        int j = 0;
        while (j <= nums.size() - 2 * k)
        {
            vector<int> vec_1(nums.begin() + j, nums.begin() + j + k);
            vector<int> vec_2(nums.begin() + j + k, nums.begin() + j + k + k);
            if (OrderVerifier(vec_1, vec_2))
            {
                return true;
                break;
            }
            j++;
        }
        return false;
    }
};
