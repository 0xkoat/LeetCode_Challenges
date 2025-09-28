#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
class Solution
{
public:
    string fractionToDecimal(int numerator, int denominator)
    {

        long long n = numerator;
        long long d = denominator;
        if (n % d == 0)
        {
            return to_string(n / d);
        }
        vector<string> result;
        if ((n < 0) ^ (d < 0))
        {
            result.push_back("-");
        }
        n = llabs(n);
        d = llabs(d);
        result.push_back(to_string(n / d));
        result.push_back(".");
        long long remainder = n % d;
        unordered_map<long long, int> seen;
        while (remainder != 0)
        {
            if (seen.find(remainder) != seen.end())
            {
                int index = seen[remainder];
                result.insert(result.begin() + index, "(");
                result.push_back(")");
                break;
            }
            seen[remainder] = result.size();
            remainder *= 10;
            result.push_back(to_string(remainder / d));
            remainder %= d;
        };
        string res;
        for (const auto &s : result)
        {
            res += s;
        }
        return res;
    }
};