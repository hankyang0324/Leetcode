//https://leetcode.com/problems/linked-list-cycle/description/

//Given a linked list, determine if it has a cycle in it.

//Follow up:
//Can you solve it without using extra space?

#include <iostream>
#include <set>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {//法1:快慢指针
        if(head==nullptr||head->next==nullptr)
            return false;
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(slow!=fast){
            if(fast==nullptr||fast->next==nullptr)//避免fast->next->next不存在的情况
                return false;
            slow=slow->next;
            fast=fast->next->next;
        }
        return true;
    }
    // bool hasCycle(ListNode *head) {//法2:用set查看是否该node已被访问
    //     set<ListNode*> node;
    //     while(head!=nullptr){
    //         if(node.count(head))
    //             return true;
    //         else
    //             node.insert(head);
    //         head=head->next;
    //     }
    //     return false;
    // }
};

int main(){}
