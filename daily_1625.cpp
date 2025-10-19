#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string shifter(string s, int b, unordered_set<string> &memo)
    {
        string shifted = "";
        for (int i = b; i < s.size(); i++)
        {
            shifted += s[i];
        }
        for (int i = 0; i < b; i++)
        {
            shifted += s[i];
        }
        return shifted;
    }

    string adder(string s, int a, unordered_set<string> &memo)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (i % 2 == 1)
            {
                int r = ((int(s[i]) - '0') + a) % 10;
                s[i] = '0' + r;
            }
        }
        return s;
    }

    string findLexSmallestString(string s, int a, int b)
    {
        unordered_set<string> memo;
        queue<string> q;
        string shifted, added, current;
        q.push(s);
        memo.insert(s);
        while (!q.empty())
        {
            current = q.front();
            q.pop();
            shifted = shifter(current, b, memo);
            if (memo.find(shifted) == memo.end())
            {
                q.push(shifted);
                memo.insert(shifted);
            }

            added = adder(current, a, memo);
            if (memo.find(added) == memo.end())
            {
                q.push(added);
                memo.insert(added);
            }
        }
        string result = s;
        for (auto &test : memo)
        {
            if (test < result)
                result = test;
        }
        return result;
    }
};