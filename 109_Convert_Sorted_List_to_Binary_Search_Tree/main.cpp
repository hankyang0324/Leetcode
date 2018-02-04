//https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/description/

//Given a singly linked list where elements are sorted in ascending order, convert it to a height balanced BST.

//For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.


//Example:

//Given the sorted linked list: [-10,-3,0,5,9],

//One possible answer is: [0,-3,9,-10,null,5], which represents the following height balanced BST:

//      0
//     / \
//   -3   9
//   /   /
// -10  5

#include <iostream>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(head==nullptr) return nullptr;
        return sortedListToBST(head,nullptr);
    }
    TreeNode* sortedListToBST(ListNode* head,ListNode* tail){
        if(head==tail) return nullptr;
        ListNode *fast=head, *slow=head;
        while(fast!=tail && fast->next!=tail){
            fast=fast->next->next;
            slow=slow->next;
        }
        TreeNode* thread=new TreeNode(slow->val);
        thread->left=sortedListToBST(head,slow);
        thread->right=sortedListToBST(slow->next,tail);
        return thread;
    }
};

int main(){}
//快慢指针找中点
//类似于二分法查找
