//https://leetcode.com/problems/palindrome-linked-list/description/

//Given a singly linked list, determine if it is a palindrome.

//Follow up:
//Could you do it in O(n) time and O(1) space?

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
    bool isPalindrome(ListNode* head) {
        if(head==nullptr||head->next==nullptr)
            return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=nullptr&&fast->next->next!=nullptr){//循环结束时slow->next刚好指向后半段开头
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);//将后一半list翻转
        slow=slow->next;
        while(slow!=nullptr){
            if(head->val!=slow->val)
                return false;
            slow=slow->next;
            head=head->next;
        }
        return true;
    }
    ListNode* reverse(ListNode* head){
        if(head==nullptr||head->next==nullptr)
            return head;
        ListNode* pre=nullptr;
        ListNode* next=nullptr;
        while(head!=nullptr){
            next=head->next;
            head->next=pre;
            pre=head;
            head=next;
        }
        return pre;
    }
};

int main(){}
