#include <iostream>
#include <string>
#include <vector>
#include <climits> // 引入 INT_MAX

using namespace std;

class MyLinkedList
{

public:
    struct LinkedNode
    {
        int val;
        LinkedNode *next;
        LinkedNode(int val) : val(val), next(nullptr) {}
    };

    MyLinkedList()
    {
        size = 0;
        vhead = new LinkedNode(0);
    }

    int get(int index)
    {
        if (index > size - 1 || index < 0)
        {
            return -1;
        }

        LinkedNode *cur = vhead;
        for (int i = 0; i <= index; i++)
        {
            cur = cur->next;
        }
        return cur->val;
    }

    void addAtHead(int val)
    {
        LinkedNode *newnode = new LinkedNode(val);
        newnode->next = vhead->next;
        vhead->next = newnode;
        size++;
    }

    void addAtTail(int val)
    {
        LinkedNode *cur = vhead;
        while (cur->next != nullptr)
        {
            cur = cur->next;
        }
        LinkedNode *newnode = new LinkedNode(val);
        cur->next = newnode;
        size++;
    }

    void addAtIndex(int index, int val)
    {
        if (index == size)
        {
            addAtTail(val);
        }
        else if (index > size)
        {
            return;
        }
        else if (index == 0)
        {
            addAtHead(val);
        }
        else
        {
            LinkedNode *newnode = new LinkedNode(val);
            LinkedNode *cur = vhead;
            for (int i = 0; i < index; i++)
            {
                cur = cur->next;
            }
            newnode->next = cur->next;
            cur->next = newnode;
            size++;
        }
    }

    void deleteAtIndex(int index)
    {
        if (index < 0 || index > size - 1)
        {
            return;
        }
        else if (index == 0)
        {
            vhead->next = vhead->next->next;
            size--;
            return;
        }
        else
        {
            LinkedNode *cur = vhead;
            for (int i = 0; i < index; i++)
            {
                cur = cur->next;
            }
            cur->next = cur->next->next;
            size--;
        }
    }

private:
    int size;
    LinkedNode *vhead;
};
/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */