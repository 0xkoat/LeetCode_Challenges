#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool AnagramChecker(string &a, string &b)
    {
        map<char, int> a_map, b_map;
        for (int i = 0; i < a.size(); i++)
        {
            a_map[a[i]] += 1;
            b_map[b[i]] += 1;
        }
        return a_map == b_map;
    }
    vector<string> removeAnagrams(vector<string> &words)
    {
        int j = 1;
        while (j < words.size())
        {
            if ((words[j - 1].size() == words[j].size()) and (AnagramChecker(words[j - 1], words[j])))
            {
                words.erase(words.begin() + j);
                j = 1;
            }
            else
            {
                j++;
            }
        }
        return words;
    }
};