//https://leetcode.com/problems/binary-tree-preorder-traversal/description/

//Given a binary tree, return the preorder traversal of its nodes' values.

//For example:
//Given binary tree [1,null,2,3],
//   1
//    \
//     2
//    /
//   3
//return [1,2,3].

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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorder(ans,root);
        return ans;
    }
    void preorder(vector<int>& ans,TreeNode* root){
        if(!root) return;
        ans.push_back(root->val);
        preorder(ans,root->left);
        preorder(ans,root->right);
    }
};

int main(){}
