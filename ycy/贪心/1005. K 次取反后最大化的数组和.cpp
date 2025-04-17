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
    int largestSumAfterKNegations(vector<int> &nums, int k)
    {
        int count = 0;
        for (auto i : nums)
        {
            if (i < 0)
            {
                count++;
            }
        }
        if (k > count)
        {
            if ((k - count) % 2 == 0)
            {
                for (int i=0;i<nums.size();i++)
            {          //k=2,conut=3 [2,3,1,5,4]    1 2 3 4 5
                nums[i]=abs(nums[i]);
            }
                int sum = 0;
                for (int i = 0; i < nums.size(); i++)
                {
                    sum += nums[i];
                }
                return sum;
            }
            else
            {
                for (int i=0;i<nums.size();i++)
            {          //k=2,conut=3 [2,3,1,5,4]    1 2 3 4 5
                nums[i]=abs(nums[i]);
            }
                sort(nums.begin(), nums.end());
                int sum = 0;
                for (int i = 1; i < nums.size(); i++)
                {
                    sum += nums[i];
                }
                return sum - nums[0];
            }
        }
        else if (count == k)
        {
            int sum = 0;
            for (int i=0;i<nums.size();i++)
            {          //k=2,conut=3 [2,3,1,5,4]    1 2 3 4 5
                nums[i]=abs(nums[i]);
            }
            for (int i = 0; i < nums.size(); i++)
            {
                sum += nums[i];
            }
            return sum;
        }
        else             // [4,-5,4,-5,9,4,5]  count > k
        {
            sort(nums.begin(),nums.end());
            int sum=0;
            for(int i=0;i<k;i++){
                sum-=nums[i];
            }
            for(int i=k;i<nums.size();i++){
                sum+=nums[i];
            }
            return sum;
        }
    }
};