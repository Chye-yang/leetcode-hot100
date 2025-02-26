#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

//   Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *cur = head;
        for(int i=0;i<4;i++){
            if(cur==nullptr){
                return false;
            }else{
                if(cur->next==nullptr){
                    return false;
                }
                cur=cur->next;
            }
        }
        if (head->next == head)
        {
            return true;
        }
        if (head->next->next == head)
        {
            return true;
        }

        cur = head->next;
        ListNode *flag = head;
        while (cur->next != nullptr)
        {
            flag = flag->next;
            cur = flag;
            while (cur->next != nullptr && cur->next != flag)
            {
                cur = cur->next;
            }
            if (cur->next == flag)
            {
                return true;
            }
        }
        return false;
    }
};