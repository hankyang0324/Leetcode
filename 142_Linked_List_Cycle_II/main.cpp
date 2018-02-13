//https://leetcode.com/problems/linked-list-cycle-ii/description/

//Given a linked list, return the node where the cycle begins. If there is no cycle, return null.

//Note: Do not modify the linked list.

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
    ListNode *detectCycle(ListNode *head) {
        if(!head) return nullptr;
        ListNode* fast=head;
        ListNode* slow=head;
        bool hasCycle=false;
        while(fast->next && fast->next->next) {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow) {
                hasCycle=true;
                break;
            }
        }
        if(hasCycle==false) return nullptr;
        fast=head;
        while(fast!=slow) {
            fast=fast->next;
            slow=slow->next;
        }
        return fast;
    }
};

int main(){}
