//https://leetcode.com/problems/remove-duplicates-from-sorted-list/solution/

//Given a sorted linked list, delete all duplicates such that each element appear only once.

//For example,
//Given 1->1->2, return 1->2.
//Given 1->1->2->3->3, return 1->2->3.

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p=head;
        while(p!=nullptr&&p->next!=nullptr){
            if(p->val==p->next->val){
                ListNode* temp=p->next;
                p->next=p->next->next;
                delete temp;
            }
            else
                p=p->next;
        }
        return head;
    }
};

int main(){}

//LinkedList删除节点
