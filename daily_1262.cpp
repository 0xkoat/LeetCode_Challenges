#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int case1(int ans, vector<int> uno, vector<int> dos)
    {
        if (uno.size() < 1 && dos.size() >= 2)
            return ans - dos[0] - dos[1];
        else if (dos.size() < 2 && uno.size() >= 1)
            return ans - uno[0];
        else if (dos.size() >= 2 && uno.size() >= 1)
            return ans - min(dos[0] + dos[1], uno[0]);
        else
            return 0;
    };

    int case2(int ans, vector<int> uno, vector<int> dos)
    {
        if (uno.size() < 2 && dos.size() >= 1)
            return ans - dos[0];
        else if (dos.size() < 1 && uno.size() >= 2)
            return ans - uno[0] - uno[1];
        else if (dos.size() >= 1 && uno.size() >= 2)
            return ans - min(dos[0], uno[0] + uno[1]);
        else
            return 0;
    };

    int maxSumDivThree(vector<int> &nums)
    {
        int res = 0;
        vector<int> ones, twos;

        for (int i = 0; i < nums.size(); i++)
        {
            res += nums[i];
            if (nums[i] % 3 == 1)
                ones.push_back(nums[i]);
            else if (nums[i] % 3 == 2)
                twos.push_back(nums[i]);
        }

        sort(ones.begin(), ones.end());
        sort(twos.begin(), twos.end());
        int r = res % 3;

        switch (r)
        {
        case 1:
            return case1(res, ones, twos);
            break;

        case 2:
            return case2(res, ones, twos);
            break;

        case 0:
            return res;
            break;
        }
        return res;
    }
};