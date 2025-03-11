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
    string removeDuplicates(string s)
    {
        string res;
        stack<char> st;
        bool flag = true;
        res = s;
        while (flag == true)
        {
            flag = false;
            for (int i = 0; i < res.size(); i++)
            {

                if (st.empty())
                {
                    st.push(res[i]);
                }
                else
                {
                    if (st.top() == res[i])
                    {
                        st.pop();
                        flag = true;
                    }else{
                        st.push(res[i]);
                    }
                }
            }
            res="";
            while (!st.empty())
            {
                res=st.top()+res;
                st.pop();
            }
            
        }
        return res;
    }
};