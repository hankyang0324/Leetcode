//https://leetcode.com/problems/same-tree/description/

//Given two binary trees, write a function to check if they are the same or not.

//Two binary trees are considered the same if they are structurally identical and the nodes have the same value.

#include <iostream>

using namespace std;

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p&&!q)
            return true;
        if(((!p)^(!q))==1)
            return false;
        return (p->val==q->val)&&isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
    }
};

int main(){}

//recursion
