#include <iostream>
#include <string>
#include <vector>
#include <climits> // 引入 INT_MAX

using namespace std;

class MyLinkedList
{
public:
    struct Linknode
    {
        int val;
        Linknode *next;
        Linknode(int val) : val(val), next(nullptr) {}
    };

    MyLinkedList()
    {
        size = 0;
        vhead = new Linknode(0);
    }

    int get(int index)
    {
        if (index < 0 || index >= size)
        {
            return -1;
        }
        else
        {
            Linknode *cur = vhead;
            for (int i = 0; i < index; i++)
            {
                cur = cur->next;
            }
            return cur->val;
        }
    }

    void addAtHead(int val)
    {
        Linknode* temp = new Linknode(val);
        temp->next=vhead->next;
        vhead.next=temp;
        size++;
    }

    void addAtTail(int val)
    {   
        Linknode* cur = vhead;  
        while (cur->next!=nullptr)
        {
            cur=cur->next;
        }
        return cur->val;
        
    }

    void addAtIndex(int index, int val)
    {
        if(index>size){
            return;
        }
        Linknode* newnode = new Linknode(val);
        Linknode* cur = vhead;
        for(int i =0;i<index-1;i++){
            cur = cur->next;
        }
        newnode->next=cur->next;
        cur->next=newnode;
    }

    void deleteAtIndex(int index)
    {
        if(index>size){
            return;
        }
        Linknode* cur = vhead;
        for(int i =0;i<index-1;i++){
            cur=cur->next;
        }
        cur->next=cur->next->next;

    }

    private:
        int size;
        Linknode* vhead;
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