//https://leetcode.com/problems/binary-tree-level-order-traversal-ii/description/

//Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).

//For example:
//Given binary tree [3,9,20,null,null,15,7],
//    3
//   / \
//  9  20
//    /  \
//   15   7
//return its bottom-up level order traversal as:
//[
//  [15,7],
//  [9,20],
//  [3]
//]

#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        level(root,ans,0);
        return ans;
    }
    void level(TreeNode* root,vector<vector<int>>& ans,int currentlevel){
        if(root==nullptr)
            return;
        if((int)ans.size()-1<currentlevel)
            ans.insert(ans.begin(),vector<int>());
        ans[ans.size()-currentlevel-1].push_back(root->val);
        level(root->left,ans,currentlevel+1);
        level(root->right,ans,currentlevel+1);
    }
};

int main(){}

//recursion
