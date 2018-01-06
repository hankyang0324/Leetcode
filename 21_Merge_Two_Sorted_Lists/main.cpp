//https://leetcode.com/problems/merge-two-sorted-lists/description/

//Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==nullptr)
            return l2;
        if(l2==nullptr)
            return l1;
        ListNode* head;
        ListNode* newlist;
        ListNode* p;
        if(l1->val<=l2->val){
            head=new ListNode(l1->val);
            newlist=head;
            for(p=l1->next;p!=nullptr;p=p->next){
                while(l2!=nullptr&&l2->val<p->val){
                    newlist->next=new ListNode(l2->val);
                    newlist=newlist->next;
                    l2=l2->next;
                }
                newlist->next=new ListNode(p->val);
                newlist=newlist->next;
            }
            while(l2!=nullptr){
                newlist->next=new ListNode(l2->val);
                newlist=newlist->next;
                l2=l2->next;
            }
        }
        else{
            head=new ListNode(l2->val);
            newlist=head;
            for(p=l2->next;p!=nullptr;p=p->next){
                while(l1!=nullptr&&l1->val<p->val){
                    newlist->next=new ListNode(l1->val);
                    newlist=newlist->next;
                    l1=l1->next;
                }
                newlist->next=new ListNode(p->val);
                newlist=newlist->next;
            }
            while(l1!=nullptr){
                newlist->next=new ListNode(l1->val);
                newlist=newlist->next;
                l1=l1->next;
            }
        }
        return head;
    }
};

int main(){}

//更好的recursive方法用了tail call，不太懂
