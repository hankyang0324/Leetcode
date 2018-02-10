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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(n==1) return head;
        ListNode* pt1=head;
        while(pt1->next) pt1=pt1->next;
        pt1->next=new ListNode(0);
        ListNode* newhead=new ListNode(0);
        newhead->next=head;
        pt1=newhead;
        int count=1;
        while(pt1->next->next && count<m){
            count++;
            pt1=pt1->next;
        }
        ListNode* pt2=pt1->next;
        while(pt2->next && count<n){
            count++;
            pt2=pt2->next;
        }
        while(n-m>0){
            ListNode* temp1=pt1->next->next;
            ListNode* temp2=pt2->next;
            pt2->next=pt1->next;
            pt2->next->next=temp2;
            pt1->next=temp1;
            n--;
        }
        while(pt2->next->next) pt2=pt2->next;
        pt2->next=nullptr;
        return newhead->next;
    }
};

int main(){}
