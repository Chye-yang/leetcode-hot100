#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_set<int> res(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (res.find(target - nums[i]) !=res.end())
            {
                for (int j = 0; j < nums.size(); j++)
                {
                    if (target - nums[i] == nums[j])
                    {
                        return vector<int>{i, j};
                    }
                }
            }
        }
    }
};