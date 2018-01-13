//https://leetcode.com/problems/implement-stack-using-queues/description/

//Implement the following operations of a stack using queues.

//push(x) -- Push element x onto stack.
//pop() -- Removes the element on top of the stack.
//top() -- Get the top element.
//empty() -- Return whether the stack is empty.

#include <iostream>
#include <queue>
using namespace std;

class MyStack {
public:
    queue<int> head,tail;
    /** Initialize your data structure here. */
    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        tail.push(x);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int ans=top();
        tail.pop();
        while(head.size()>0){
            tail.push(head.front());
            head.pop();
        }
        return ans;
    }

    /** Get the top element. */
    int top() {
        while(tail.size()>1){
            head.push(tail.front());
            tail.pop();
        }
        return tail.front();
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return head.empty()&&tail.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * bool param_4 = obj.empty();
 */

int main(){}

//double queues
//queue head <- xxxxxx  |  xxxxxxx <- queue tail


