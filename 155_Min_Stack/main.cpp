//https://leetcode.com/problems/min-stack/description/


//Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

//push(x) -- Push element x onto stack.
//pop() -- Removes the element on top of the stack.
//top() -- Get the top element.
//getMin() -- Retrieve the minimum element in the stack.
//Example:
//MinStack minStack = new MinStack();
//minStack.push(-2);
//minStack.push(0);
//minStack.push(-3);
//minStack.getMin();   --> Returns -3.
//minStack.pop();
//minStack.top();      --> Returns 0.
//minStack.getMin();   --> Returns -2.

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class MinStack {
    stack<int> data;
    vector<int> nums;
public:
    /** initialize your data structure here. */
    MinStack() {

    }

    void push(int x) {
        data.push(x);
        nums.push_back(x);
        sort(nums.begin(),nums.end());
    }

    void pop() {
        for(vector<int>::iterator it=nums.begin();it!=nums.end();++it){
            if(*it==data.top()){
                nums.erase(it);
                break;
            }
        }
        data.pop();
    }

    int top() {
        return data.top();
    }

    int getMin() {
        return nums[0];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */

int main(){}
