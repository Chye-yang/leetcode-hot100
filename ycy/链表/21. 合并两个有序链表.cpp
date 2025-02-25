#include <iostream>
#include <string>
#include <vector>
#include <climits> // 引入 INT_MAX

using namespace std;

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *cur1 = list1, *cur2 = list2;
        ListNode *newnode = new ListNode(0);
        ListNode *cur = newnode;
        while (1)
        {
            if (cur1 == nullptr)
            {
                cur->next = cur2;
                return newnode->next;
            }
            else if (cur2 == nullptr)
            {
                cur->next = cur1;
                return newnode->next;
            }
            else
            {

                if (cur1->val < cur2->val)
                {
                    ListNode *tmp = new ListNode(cur1->val);
                    cur->next = tmp;
                    cur = cur->next;
                    cur1 = cur1->next;
                }
                else
                {
                    ListNode *tmp = new ListNode(cur2->val);
                    cur->next = tmp;
                    cur = cur->next;
                    cur2 = cur2->next;
                }
            }
        }
    }
};