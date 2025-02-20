#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        stack<int> st;
        vector<int> result(temperatures.size(), 0);
        for (int i = 0; i < temperatures.size(); i++)
        {
            while (!st.empty() and temperatures[i] > temperatures[st.top()])
            {
                result[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
            
        }
        return result;
    }
}