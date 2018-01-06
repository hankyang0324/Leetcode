//https://leetcode.com/problems/reverse-linked-list/description/

//Reverse a singly linked list.

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
    ListNode* reverseList(ListNode* head) {
        ListNode* pre=nullptr;
        while(head){
            ListNode* next=head->next;
            head->next=pre;
            pre=head;
            head=next;
        }
        return pre;
    }
};

int main(){}

//翻转linkedList
