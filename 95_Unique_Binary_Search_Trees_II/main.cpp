//https://leetcode.com/problems/unique-binary-search-trees-ii/description/

//Given an integer n, generate all structurally unique BST's (binary search trees) that store values 1...n.

//For example,
//Given n = 3, your program should return all 5 unique BST's shown below.

//   1         3     3      2      1
//    \       /     /      / \      \
//     3     2     1      1   3      2
//    /     /       \                 \
//   2     1         2                 3

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
    vector<TreeNode*> generateTrees(int n) {
        vector<vector<TreeNode*>> result(n+1);
        if(n==0) return result[0];
        result[0].push_back(nullptr);
        for(int len=1;len<=n;len++){
            for(int i=0;i<len;i++){
                for(TreeNode* nodeL:result[i]){
                    for(TreeNode* nodeR:result[len-i-1]){
                        TreeNode* node=new TreeNode(i+1);
                        node->left=nodeL;
                        node->right=clone(nodeR,i+1);
                        result[len].push_back(node);
                    }
                }
            }
        }
        return result[n];
    }
    TreeNode* clone(TreeNode* node,int offset) {
        if(!node) return nullptr;
        TreeNode* copynode=new TreeNode(node->val+offset);
        copynode->left=clone(node->left,offset);
        copynode->right=clone(node->right,offset);
        return copynode;
    }
};

int main(){}

//BST
//DP
//96
