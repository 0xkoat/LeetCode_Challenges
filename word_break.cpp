#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    unordered_map<int, bool> memo;

    bool wordBreakFrom(int start, string &s, vector<string> &wordDict)
    {
        if (start == s.size())
            return true;
        if (memo.count(start))
            return memo[start];

        for (auto &word : wordDict)
        {
            int len = word.size();
            if (start + len <= s.size() && s.substr(start, len) == word)
            {
                if (wordBreakFrom(start + len, s, wordDict))
                {
                    return memo[start] = true;
                }
            }
        }

        return memo[start] = false;
    }

    bool wordBreak(string s, vector<string> &wordDict)
    {
        memo.clear();
        return wordBreakFrom(0, s, wordDict);
    }
};
