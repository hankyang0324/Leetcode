//https://leetcode.com/problems/binary-tree-tilt/description/

//Given a binary tree, return the tilt of the whole tree.

//The tilt of a tree node is defined as the absolute difference between the sum of all left subtree node values and the sum of all right subtree node values. Null node has tilt 0.

//The tilt of the whole tree is defined as the sum of all nodes' tilt.

//Example:
//Input:
//         1
//       /   \
//      2     3
//Output: 1
//Explanation:
//Tilt of node 2 : 0
//Tilt of node 3 : 0
//Tilt of node 1 : |2-3| = 1
//Tilt of binary tree : 0 + 0 + 1 = 1

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
    int tilt=0;
public:
    int findTilt(TreeNode* root) {
        traverse(root);
        return tilt;
    }
    int traverse(TreeNode* root){
        if(!root)
            return 0;
        int left=traverse(root->left);
        int right=traverse(root->right);
        tilt+=abs(left-right);
        return left+right+root->val;
    }
};

int main(){}

//recursion
//traverse
//每个节点要做的事：左-右得到当前tilt，把左右和自己的值加起来。结束条件：该节点为nullptr
