#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> res(nums1.size(), -1);
        for (int i = 0; i < nums1.size(); i++)
        {
            auto it = find(nums2.begin(), nums2.end(), nums1[i])
            {
                for (auto j = it + 1; j < nums2.end(); j++)
                {
                    if (*j > nums1[i])
                    {
                        res[i] = *j;
                    }
                }
            }
        }
        return res;
    }
};