#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <unordered_map>
#include <string>
#include <stack>

using namespace std;

class Solution
{
public:
    string reverseStr(string s, int k)
    {

        int front = (s.size() / (2 * k)) * 2 * k - 1;
        int count = 0;
        bool flag = true;
        string str;
        stack<int> st;

        for (int i = 0; i <= front; i++)
        {
            if (flag == true) // 倒序
            {
                if (count == k)
                {
                    count = 0;
                    flag = false;
                    for (int j = 0; j < k; j++)
                    {
                        str += st.top();
                        st.pop();
                    }
                    count++;
                    str += s[i];
                }
                else
                {
                    count++;
                    st.push(s[i]);
                }
            }

            if (flag == false) // 正序
            {
                if (count == k)
                {
                    count = 0;
                    flag = true;
                    count++;
                    st.push(s[i]);
                }
                else
                {
                    count++;
                    str += s[i];
                }
            }
        }
        if (s.size() - 1 - front <= k)
        {
            for (int i = front + 1; i < s.size(); i++)
            {
                st.push(s[i]);
            }
            for (int i = front + 1; i < s.size(); i++)
            {
                str += st.top();
                st.pop();
            }
        }
        else
        {
            for (int i = front + 1; i < front + 1 + k; i++)
            {
                st.push(s[i]);
            }
            for (int i = front + 1; i < front + 1 + k; i++)
            {
                str += st.top();
                st.pop();
            }
            for (int i = front + 1 + k; i < s.size(); i++)
            {
                str += s[i];
            }
        }
    }
    return str;
};

  