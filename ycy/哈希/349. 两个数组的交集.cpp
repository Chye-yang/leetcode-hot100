#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <unordered_set>

using namespace std;

using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_set<int> result;
        unordered_set<int> num1(nums1.begin(), nums1.end());
        for (int num : nums2)
        {
            if (num1.find(num)!=num1.end())
            {
                result.insert(nums2[i]);
            }
        }
        return vector<int> (result.begin(),result.end());
    }
};