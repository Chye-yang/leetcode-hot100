#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    int fourSumCount(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3, vector<int> &nums4)
    {
        unordered_map<int, int> map;
        int count = 0;
        for (int num1 : nums1)
        {
            for (int num2 : nums2)
            {
                int sum1 = num1 + num2;
                map[sum1]++;
            }
        }
        for (int num3 : nums3)
        {
            for (int num4 : nums4)
            {
                int sum3 = -(num3 + num4);
                if (map.find(sum3) != map.end())
                {
                    count++;
                }
            }
        }
        return count;
    }
};