#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class MyStack {
    public:
        MyStack() {
            
        }
        
        queue<int> que;

        void push(int x) {
            que.push(x);
        }
        
        int pop() {
            for(int i=0;i<que.size()-1;i++){
                que.push(que.front());
                que.pop();
            }
            int tmp=que.front();
            que.pop();
            return tmp;
        }
        
        int top() {
            return que.back();
        }
        
        bool empty() {
            return que.empty();
        }
    };
    
    /**
     * Your MyStack object will be instantiated and called as such:
     * MyStack* obj = new MyStack();
     * obj->push(x);
     * int param_2 = obj->pop();
     * int param_3 = obj->top();
     * bool param_4 = obj->empty();
     */