#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {
        unordered_map<int, int> found_nums;

        for (int i = 0; i < nums.size(); i++)
        {
            found_nums[nums[i]]++;
        }
        int maxfreq = 0;
        for (auto &p : found_nums)
        {
            maxfreq = max(maxfreq, p.second);
        }
        int count = 0;
        for (auto &p : found_nums)
        {
            if (p.second == maxfreq)
            {
                count++;
            }
        }
        return maxfreq * count;
    };
};
