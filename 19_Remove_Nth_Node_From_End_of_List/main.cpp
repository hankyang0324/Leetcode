//https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

//Given a linked list, remove the nth node from the end of list and return its head.

//For example,

//   Given linked list: 1->2->3->4->5, and n = 2.

//   After removing the second node from the end, the linked list becomes 1->2->3->5.
//Note:
//Given n will always be valid.
//Try to do this in one pass.

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* node=head;
        int count=0;
        while(node!=nullptr){
            node=node->next;
            count++;
        }
        int order=count-n+1;
        if(order<1||n<=0) return head;
        if(order==1) return head->next;
        node=head;
        int i=1;
        while(i<order-1){
            node=node->next;
            i++;
        }
        node->next=node->next->next;
        return head;
    }
};

int main(){}
