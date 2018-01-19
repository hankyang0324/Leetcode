//https://leetcode.com/problems/path-sum/description/

//Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.

//For example:
//Given the below binary tree and sum = 22,
//              5
//             / \
//            4   8
//           /   / \
//          11  13  4
//         /  \      \
//        7    2      1
//return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22.

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
    bool PathSum(TreeNode* root, int sum, int currentSum){
        if(!root)
            return false;
        currentSum+=root->val;
        if(!root->left && !root->right)
            return currentSum==sum;
        return PathSum(root->left,sum,currentSum)||PathSum(root->right,sum,currentSum);
    }
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==nullptr)
            return false;
        return PathSum(root,sum,0);
    }
};

int main(){}
