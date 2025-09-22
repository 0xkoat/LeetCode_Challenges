#include <vector>
#include <map>
#include <set>
#include <algorithm>
class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {

        std::map<int, int> found_nums;
        std::sort(nums.begin(), nums.end());
        int candidate = nums[0];
        int counter = 1;

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == candidate)
            {
                counter++;
            }
            else
            {
                found_nums[counter] += 1;
                candidate = nums[i];
                counter = 1;
            }
        }
        found_nums[counter] += 1;

        int largestkey = (--found_nums.end())->first;
        return largestkey * found_nums[largestkey];
    }
};