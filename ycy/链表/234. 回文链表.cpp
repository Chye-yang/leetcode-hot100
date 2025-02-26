#include <iostream>
#include <string>
#include <vector>
#include <climits> // 引入 INT_MAX
#include <stack>

using namespace std;

// struct ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        int lon = 0;
        ListNode *cur = head;
        stack<int> st;
        while (cur != nullptr)
        {
            lon++;
            cur=cur->next;
        }

        if (lon == 0 ||lon==1)
        {
            return true;
        }
        else
        {
            cur = head;
            for (int i = 0; i < lon / 2 ; i++)
            {
                    st.push(cur->val);
                    cur = cur->next;
            }
            if (lon % 2 == 0)
            {
                while (cur != nullptr)
                {
                    if (st.top() != cur->val)
                    {
                        return false;
                    }
                    else
                    {
                        st.pop();
                        cur = cur->next;
                    }
                }
            }
            else
            {
                cur = cur->next;
                while (cur != nullptr)
                {
                    if (st.top() != cur->val)
                    {
                        return false;
                    }
                    else
                    {
                        st.pop();
                        cur = cur->next;
                    }
                }
            }
            if(st.empty()){
                return true;
            }else{
                return false;
            }
        }
    }
};