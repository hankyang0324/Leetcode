//https://leetcode.com/problems/delete-node-in-a-linked-list/description/

//Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.

//Supposed the linked list is 1 -> 2 -> 3 -> 4 and you are given the third node with value 3, the linked list should become 1 -> 2 -> 4 after calling your function.

#include <iostream>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp=node->next;
        //*node=*(node->next);等于下面两行，不清楚拷贝规则，觉得有点不保险
        node->val=node->next->val;
        node->next=node->next->next;
        delete temp;
    }
};

int main(){}

//1.把next里的成员赋给当前node
//2.删除next node
