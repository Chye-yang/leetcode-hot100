#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <queue>

using namespace std;

// class Solution
// {
// public:
//     bool canJump(vector<int> &nums)
//     {

//         int allrange =nums[0];
//         for (int i=0;i<=allrange;i++){

//             if(allrange+1>=nums.size()){
//                 return true;
//             }else{
//                 allrange=max(allrange,nums[i]+i);
//             }
//         }
//         return false;
//     }
// };

class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        if (nums.size() == 1)
        {
            return true;
        }
        int far = 0, cur = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            cur = i + nums[i];
            if (far >= i)
            {
                far = max(far, cur);
            }
        }
        if (far + 1 >= nums.size())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};