#include <iostream>
#include <string>
#include <vector>
#include <climits> // 引入 INT_MAX

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        //     if(headA->val==headB->val){
        //         return headA;
        //     }
        ListNode *curA = headA, *curB = headB;
        if (curA == nullptr || curB == nullptr)
        {
            return nullptr;
        }
        while (curA!=curB)
        {   
            curA==curA->next;
            if(curA->next)
        }

        //     while (curB!=nullptr)
        //     {
        //         if(curB->next!=curA){
        //             curB=curB->next;
        //         }else{
        //             return curA;
        //         }
        //     }
        //     curB=headB;
        //     while (curA != nullptr)
        //     {
        //         curB=headB;
        //         while (curB != nullptr)
        //         {
        //             if (curA->next != curB)
        //             {
        //                 curB = curB->next;
        //             }
        //             else
        //             {
        //                 return curB;
        //             }
        //         }
        //         curA=curA->next;
        //     }
        //     return nullptr;
    }
};