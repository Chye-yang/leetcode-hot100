#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <queue>

using namespace std;

class danque
{
public:
    deque<int> que;

    void push(int x)
    {
        while (!que.empty() && que.back() < x)
        {
            que.pop_back();
        }
        que.push_back(x);
    }

    void pop(int x)
    {
        if (!que.empty() && que.front() == x)
        {
            que.pop_front();
        }
    }

    int front()
    {
        return que.front();
    }
};

class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        danque myque;
        vector<int> res;
        for (int i = 0; i < k; i++)
        {
            myque.push(nums[i]);
        }
        res.push_back(myque.front());
        for(int i=k;i<nums.size();i++){
            myque.pop(nums[i-k]);
            myque.push(nums[i]);
            res.push_back(myque.front());
        }
        return res;
    }
};