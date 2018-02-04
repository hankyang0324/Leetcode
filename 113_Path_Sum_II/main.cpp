//https://leetcode.com/problems/path-sum-ii/description/

//Given a binary tree and a sum, find all root-to-leaf paths where each path's sum equals the given sum.

//For example:
//Given the below binary tree and sum = 22,
//              5
//             / \
//            4   8
//           /   / \
//          11  13  4
//         /  \    / \
//        7    2  5   1
//return
//[
//   [5,4,11,2],
//   [5,8,4,5]
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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> res;
        vector<int> ans;
        pathSum(root,res,ans,sum);
        return res;
    }
    void pathSum(TreeNode* root,vector<vector<int>>& res,vector<int> ans,int sum){
        if(!root) return;
        if(!root->left && !root->right && sum==root->val){
            ans.push_back(root->val);
            res.push_back(ans);
            return;
        }
        ans.push_back(root->val);
        pathSum(root->left,res,ans,sum-root->val);
        pathSum(root->right,res,ans,sum-root->val);
    }
};

int main(){}
