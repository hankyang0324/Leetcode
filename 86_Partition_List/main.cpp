//https://leetcode.com/problems/partition-list/description/

//Given a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.

//You should preserve the original relative order of the nodes in each of the two partitions.

//For example,
//Given 1->4->3->2->5->2 and x = 3,
//return 1->2->2->4->3->5.

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
    ListNode* partition(ListNode* head, int x) {
        if(!head || !head->next) return head;
        ListNode* prehead=new ListNode(x-1);
        prehead->next=head;
        ListNode* temp=prehead;
        while(temp->next){
            if(temp->next->val>=x) break;
            temp=temp->next;
        }
        if(!temp || !temp->next) return prehead->next;
        ListNode* part=temp;
        while(temp->next->next){
            if(temp->next->val>=x) temp=temp->next;
            else{
                ListNode* temp1=part->next;
                part->next=temp->next;
                temp->next=temp->next->next;
                part->next->next=temp1;
                part=part->next;
            }
        }
        if(temp->next->val<x){
            ListNode* temp1=part->next;
            part->next=temp->next;
            temp->next=temp->next->next;
            part->next->next=temp1;
        }
        return prehead->next;
    }
};

int main(){}
