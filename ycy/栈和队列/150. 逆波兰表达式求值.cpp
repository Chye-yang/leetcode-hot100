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
    int evalRPN(vector<string> &tokens)
    {
        stack<int> st;
        for (auto str : tokens)
        {
            if (str != "+" and str != "-" and str != "*" and str != "/")
            {
                st.push(stoi(str));
            }else{
                n2=st.top();
                st.pop();
                n1=st.top();
                st.pop();
                if(str=="+"){
                    st.push(n1+n2);
                }if(str=="-"){
                    st.push(n1-n2);
                }if(str=="*"){
                    st.push(n1*n2);
                }if(str=="/"){
                    st.push(n1/n2);
                }
            }
        }
        return st.top();
    }
};