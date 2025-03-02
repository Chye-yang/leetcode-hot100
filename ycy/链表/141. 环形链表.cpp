#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

// //   Definition for singly-linked list.
// struct ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };
// 暴力O(n2)做法会超时
// class Solution {
// public:
//     bool hasCycle(ListNode *head)
//     {
//         ListNode *cur = head;
//         ListNode *jud;
//         while (cur != nullptr)
//         {
//             cur = cur->next;
//             jud = cur;
//             while (jud != nullptr)
//             {
//                 jud=jud->next;
//                 if (jud == cur)
//                 {
//                     return true;
//                 }

//             }
//         }
//         return false;
//     }
// };