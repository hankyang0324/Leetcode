//https://leetcode.com/problems/remove-linked-list-elements/description/

//Remove all elements from a linked list of integers that have value val.

//Example
//Given: 1 --> 2 --> 6 --> 3 --> 4 --> 5 --> 6, val = 6
//Return: 1 --> 2 --> 3 --> 4 --> 5

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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prehead=new ListNode(0);
        prehead->next=head;
        ListNode* p=prehead;
        while(p->next){
            if(p->next->val==val){
                ListNode* temp=p->next;
                p->next=p->next->next;
                delete temp;
            }
            else
                p=p->next;
        }
        head=prehead->next;
        delete prehead;
        return head;
    }
};

int main(){}

//删除linkedlist里元素
//在head之前建立一个prehead指向head
//完成操作后删除prehead
