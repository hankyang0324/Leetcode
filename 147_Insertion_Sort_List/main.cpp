//https://leetcode.com/problems/insertion-sort-list/description/

//Sort a linked list using insertion sort.

#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
   int val;
   ListNode *next;
   ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* newhead=new ListNode(0);
        newhead->next=head;
        ListNode* temp=head;
        while(temp->next->next){
            ListNode* front=newhead;
            int flag=0;
            while(front->next!=temp->next){
                if(front->next->val<=temp->next->val) front=front->next;
                else{
                    ListNode* tempfront=front->next;
                    front->next=temp->next;
                    temp->next=temp->next->next;
                    front->next->next=tempfront;
                    flag=1;
                    break;
                }
            }
            flag==1?0:temp=temp->next;//注意如果insert了，temp->next已经变成了temp->next->next了，不用temp=temp->next
        }
        if(temp->next){
            ListNode* front=newhead;
            while(front->next!=temp->next){
                if(front->next->val<=temp->next->val) front=front->next;
                else{
                    ListNode* tempfront=front->next;
                    front->next=temp->next;
                    temp->next=temp->next->next;
                    front->next->next=tempfront;
                    break;
                }
            }
        }
        return newhead->next;
    }
};

int main(){}
