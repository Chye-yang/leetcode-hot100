#include <iostream>
#include <string>
#include <vector>
#include <climits>  // 引入 INT_MAX

using namespace std;

class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int i = 0;
        int sum = 0;
        int result = INT32_MAX;
        for (int j = i; j < nums.size(); j++)
        {
            sum += nums[j];
            while (sum >= target)
            {

                result = min(result, j - i + 1);
                sum -= nums[i];
                i++;
            }
                }
        if (result==INT_MAX){
            return 0;
        }else{
            return result;
        }
    }
};