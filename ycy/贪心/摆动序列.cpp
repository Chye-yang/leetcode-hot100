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
    int wiggleMaxLength(vector<int> &nums)
    {

        if (nums.size() < 2)
            return nums.size();

        vector<int> delta0;
        for (int i = 1; i < nums.size(); i++)
        {
            delta.push_back(nums[i] - nums[i - 1]);
        }

        vector<int> delta;
        for (auto i : delta0)
        {
            if (i != 0)
            {
                delta.push_back(i);
            }
        }
        if(delta.empty()){return 1;}

        int temp;
        int len = 1;
        int res = 1;
        for (int i = 0; i < delta.size() - 1; i++)
        {
            temp = delta[i];
            for (int j = i + 1; j < delta.size(); j++)
            {
                if (temp > 0)
                {
                    if (delta[j] < 0)
                    {
                        temp = delta[j];
                        len++;
                    }
                }
                if (temp < 0)
                {
                    if (delta[j] > 0)
                    {
                        temp = delta[j];
                        len++;
                    }
                }
                res=max(res,len);
            }
        }
        return res + 1;
    }
};