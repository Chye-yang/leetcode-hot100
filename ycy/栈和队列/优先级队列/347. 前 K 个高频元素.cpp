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
    static bool con(pair<int, int> m1, pair<int, int> m2)
    {
        return m1.second > m2.second;
    }

    vector<int> topKFrequent(vector<int> &nums, int k)
    {

        unordered_map<int, int> map;
        vector<pair<int,int>> tmp;
        vector<int> res;
        for (auto num : nums)
        {
            map[num]++;
        }
        for (auto num : map)
        {
            tmp.push_back({num.first,num.second});
        }
        sort(tmp.begin(),tmp.end(),con);
        for(int i=0;i<k;i++){
            res.push_back(tmp[i].first);
        }
        return res;
    }
};