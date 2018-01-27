//https://leetcode.com/problems/binary-tree-level-order-traversal/description/

//Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).

//For example:
//Given binary tree [3,9,20,null,null,15,7],
//    3
//   / \
//  9  20
//    /  \
//   15   7
//return its level order traversal as:
//[
//  [3],
//  [9,20],
//  [15,7]
//]

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        levelOrder(root,ans,0);
        return ans;
    }
    void levelOrder(TreeNode* root,vector<vector<int>>& ans,int level){
        if(!root) return;
        ans.size()<level+1 ? ans.push_back({root->val}) : ans[level].push_back(root->val);
        levelOrder(root->left,ans,level+1);
        levelOrder(root->right,ans,level+1);
    }
};

int main(){}
