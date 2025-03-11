#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class MyQueue
{

private:
    stack<int> stin;
    stack<int> stout;

public:
    MyQueue()
    {
    }

    void push(int x)
    {
        stin.push(x);
    }

    int pop()
    {
        while (!stin.empty())
        {
            stout.push(stin.top());
            stin.pop();
        }
        int tmp = stout.top();
        stout.pop();
        while (!stout.empty())
        {
            stin.push(stout.top());
            stout.pop();
        }
        return tmp;
    }

    int peek()
    {
        while (!stin.empty())
        {
            stout.push(stin.top());
            stin.pop();
        }
        int tmp = stout.top();
        while (!stout.empty())
        {
            stin.push(stout.top());
            stout.pop();
        }
        return tmp;
    }

    bool empty()
    {
        return stin.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */