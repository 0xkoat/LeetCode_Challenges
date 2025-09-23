#include <vector>
#include <algorithm>
#include <sstream>
class Solution
{
public:
    int compareVersion(string version1, string version2)
    {
        std::vector<int> numbers1;
        std::vector<int> numbers2;
        std::string token;
        std::stringstream ss1(version1);
        while (std::getline(ss1, token, '.'))
        {
            numbers1.push_back(std::stoi(token));
        }
        std::stringstream ss2(version2);
        while (std::getline(ss2, token, '.'))
        {
            numbers2.push_back(std::stoi(token));
        }
        if (numbers1.size() < numbers2.size())
        {
            while (numbers1.size() < numbers2.size())
            {
                numbers1.push_back(0);
            }
        }
        else if (numbers2.size() < numbers1.size())
        {
            while (numbers2.size() < numbers1.size())
            {
                numbers2.push_back(0);
            }
        }
        int i = 0;
        while (i < numbers1.size())
        {
            if (numbers1[i] < numbers2[i])
            {
                return -1;
            }
            else if (numbers1[i] > numbers2[i])
            {
                return 1;
            }
            else
            {
                i++;
            }
        }
        return 0;
    }
};
