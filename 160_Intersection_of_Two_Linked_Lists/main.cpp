//https://leetcode.com/problems/intersection-of-two-linked-lists/description/

//Write a program to find the node at which the intersection of two singly linked lists begins.

//For example, the following two linked lists:

//A:          a1 → a2
//                   ↘
//                     c1 → c2 → c3
//                   ↗
//B:     b1 → b2 → b3
//begin to intersect at node c1.

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // unordered_set<ListNode*> elementsA;//法1: hash set
        // ListNode* A=headA;
        // while(A){
        //     elementsA.insert(A);
        //     A=A->next;
        // }
        // ListNode* B=headB;
        // while(B){
        //     if(elementsA.count(B))
        //         return B;
        //     B=B->next;
        // }
        // return nullptr;
        ListNode* A=headA;//法2:双指针
        ListNode* B=headB;
        if(A==nullptr||B==nullptr)
            return nullptr;
        while(A!=nullptr && B!=nullptr && A!=B){
            A=A->next;
            B=B->next;
            if(A==B)
                return A;
            if(A==nullptr)
                A=headB;
            if(B==nullptr)
                B=headA;
        }
        return A;
    }
};

int main(){}
