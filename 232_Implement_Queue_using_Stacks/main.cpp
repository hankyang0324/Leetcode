//https://leetcode.com/problems/implement-queue-using-stacks/description/

//Implement the following operations of a queue using stacks.

//push(x) -- Push element x to the back of queue.
//pop() -- Removes the element from in front of queue.
//peek() -- Get the front element.
//empty() -- Return whether the queue is empty.

#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
    stack<int> input,output;
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }

    /** Push element x to the back of queue. */
    void push(int x) {
        input.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        peek();
        int temp=output.top();
        output.pop();
        return temp;
    }

    /** Get the front element. */
    int peek() {
        if(output.empty()){
            while(input.size()){
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return input.empty()&&output.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */

int main(){}

//double stacks
//head xxxxxx -> stack output  |  stack input <- xxxxxxx tail
