//https://leetcode.com/problems/validate-binary-search-tree/description/

//Given a binary tree, determine if it is a valid binary search tree (BST).

//Assume a BST is defined as follows:

//The left subtree of a node contains only nodes with keys less than the node's key.
//The right subtree of a node contains only nodes with keys greater than the node's key.
//Both the left and right subtrees must also be binary search trees.
//Example 1:
//    2
//   / \
//  1   3
//Binary tree [2,1,3], return true.
//Example 2:
//    1
//   / \
//  2   3
//Binary tree [1,2,3], return false.

#include <iostream>
#include <vector>
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
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        if(!root->left && !root->right) return true;
        vector<int> res;
        inorder(root,res);
        for(int i=0;i<res.size()-1;i++){
            if(res[i]>=res[i+1]) return false;
        }
        return true;
    }
    void inorder(TreeNode* root,vector<int>& res) {
        if(!root) return;
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);
    }
};

int main(){}
