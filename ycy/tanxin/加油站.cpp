#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int allgas = 0;
        int curgas = 0;
        int start;
        for (int i = 0; i < gas.size(); i++)
        {
            allgas = allgas + gas[i] - cost[i];
            curgas = curgas + gas[i] - cost[i];
            if (curgas < 0)
            {
                start =i+1;
                curgas = 0;
            }
        }
        return allgas >= 0 ? start : -1;
    }
};
