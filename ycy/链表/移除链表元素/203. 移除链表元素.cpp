#include <iostream>
#include <string>
#include <vector>
#include <climits> // 引入 INT_MAX

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {    
    public:
        ListNode* removeElements(ListNode* head, int val) {
            ListNode* vhead=new ListNode(0);
            vhead->next = head;
            ListNode* cur = vhead;
            while (cur->next!=nullptr)
            {
                if(cur->next->val==val){
                    cur->next=cur->next->next;
                }else{
                    cur=cur->next;
                }
            }
            vhead=vhead->next;
            return vhead;
                  
        }
    };