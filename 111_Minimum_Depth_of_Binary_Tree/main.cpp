//https://leetcode.com/problems/minimum-depth-of-binary-tree/description/

//Given a binary tree, find its minimum depth.

//The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

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
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        if(!root->left)
            return minDepth(root->right)+1;
        if(!root->right)
            return minDepth(root->left)+1;
        return min(minDepth(root->left),minDepth(root->right))+1;
    }
};

int main(){}
