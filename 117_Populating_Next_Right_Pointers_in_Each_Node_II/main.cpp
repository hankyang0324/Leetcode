//https://leetcode.com/problems/populating-next-right-pointers-in-each-node-ii/description/

//Follow up for problem "Populating Next Right Pointers in Each Node".

//What if the given tree could be any binary tree? Would your previous solution still work?

//Note:

//You may only use constant extra space.
//For example,
//Given the following binary tree,
//         1
//       /  \
//      2    3
//     / \    \
//    4   5    7
//After calling your function, the tree should look like:
//         1 -> NULL
//       /  \
//      2 -> 3 -> NULL
//     / \    \
//    4-> 5 -> 7 -> NULL

#include <iostream>

using namespace std;

//Definition for binary tree with next pointer.
struct TreeLinkNode {
   int val;
   TreeLinkNode *left, *right, *next;
   TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 };

class Solution {
public:
    void connect(TreeLinkNode *root) {
        TreeLinkNode* head = nullptr; //head of the next level
        TreeLinkNode* prev = nullptr; //the leading node on the next level
        TreeLinkNode* cur = root;  //current node of current level
        while (cur != nullptr) {
            while (cur != nullptr) { //iterate on the current level
                //left child
                if (cur->left != nullptr) {
                    if (prev != nullptr) {
                        prev->next = cur->left;
                    } else {
                        head = cur->left;
                    }
                    prev = cur->left;
                }
                //right child
                if (cur->right != nullptr) {
                    if (prev != nullptr) {
                        prev->next = cur->right;
                    } else {
                        head = cur->right;
                    }
                    prev = cur->right;
                }
                //move to next node
                cur = cur->next;
            }
            //move to next level
            cur = head;
            head = nullptr;
            prev = nullptr;
        }
    }
};

int main(){}
