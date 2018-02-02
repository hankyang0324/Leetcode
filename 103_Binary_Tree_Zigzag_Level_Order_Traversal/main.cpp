//https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/

//Given a binary tree, return the zigzag level order traversal of its nodes' values. (ie, from left to right, then right to left for the next level and alternate between).

//For example:
//Given binary tree [3,9,20,null,null,15,7],
//    3
//   / \
//  9  20
//    /  \
//   15   7
//return its zigzag level order traversal as:
//[
//  [3],
//  [20,9],
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        zigzag(root,0,ans);
        return ans;
    }
    void zigzag(TreeNode* root,int level,vector<vector<int>>& ans){
        if(!root) return;
        if(ans.size()<level+1) ans.push_back(vector<int>());
        if(level%2==0) ans[level].push_back(root->val);
        else ans[level].insert(ans[level].begin(),root->val);
        zigzag(root->left,level+1,ans);
        zigzag(root->right,level+1,ans);
    }
};

int main(){}
