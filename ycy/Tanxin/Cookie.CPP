#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <queue>

using namespace std;

class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        long long res = 0;
        int si = 0;
        for (int gi = 0; gi < g.size(); gi++)
        {
            if (si == s.size())
            {
                return res;
            }
            while (si < s.size())
            {
                if (s[si] >= g[gi])
                {
                    si++;
                    res++;
                    break;
                }
                else
                {
                    si++;
                }
            }
        }
        return res;
    }
};
