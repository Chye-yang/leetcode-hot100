/*
 * @lc app=leetcode.cn id=155 lang=cpp
 * @lcpr version=30103
 *
 * [155] 最小栈
 */

// @lc code=start
class MinStack {
public:
    stack<int> st1;

    stack<int> st2;
    MinStack() {
        
    }
    


    void push(int val) {
        st1.push(val);
        if(st2.top()>=val){
            st2.push(val);
        }
    }
    
    void pop() {
        int tmp=st1.top();
        st1.pop();
        if(st2.top()==tmp){
            st2.pop();
        }
    }
    
    int top() {
        return st1.top();
    }
    
    int getMin() {
        return st2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end



/*
// @lcpr case=start
// ["MinStack","push","push","push","getMin","pop","top","getMin"][[],[-2],[0],[-3],[],[],[],[]]\n
// @lcpr case=end

 */

