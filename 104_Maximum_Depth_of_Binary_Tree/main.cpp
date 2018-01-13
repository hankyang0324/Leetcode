//https://leetcode.com/problems/maximum-depth-of-binary-tree/description/

//Given a binary tree, find its maximum depth.

//The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

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
    int maxDepth(TreeNode* root) {
        return root==nullptr?0:max(maxDepth(root->left),maxDepth(root->right))+1;
    }
};

int main(){}

//DFS 想不出来
