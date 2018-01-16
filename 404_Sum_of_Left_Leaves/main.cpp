//https://leetcode.com/problems/sum-of-left-leaves/description/

//Find the sum of all left leaves in a given binary tree.

//Example:

//    3
//   / \
//  9  20
//    /  \
//   15   7

//There are two left leaves in the binary tree, with values 9 and 15 respectively. Return 24.

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
    int sumOfLeftLeaves(TreeNode* root) {
        int add=0;
        if(root==nullptr)
            return add;
        if(root->left!=nullptr&&root->left->left==0&&root->left->right==0)
            add+=root->left->val;
        return add+sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
    }
};

int main(){}
