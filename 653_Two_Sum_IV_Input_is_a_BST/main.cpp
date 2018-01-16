//https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/

//Given a Binary Search Tree and a target number, return true if there exist two elements in the BST such that their sum is equal to the given target.

//Example 1:
//Input:
//    5
//   / \
//  3   6
// / \   \
//2   4   7

//Target = 9

//Output: True
//Example 2:
//Input:
//    5
//   / \
//  3   6
// / \   \
//2   4   7

//Target = 28

//Output: False

#include <iostream>
#include <unordered_set>

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
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> elements;
        return lookfor(root,k,elements);
    }
    bool lookfor(TreeNode* root,int k,unordered_set<int>& elements){
        if(root==nullptr)
            return false;
        if(elements.count(k-root->val))
            return true;
        elements.insert(root->val);
        return lookfor(root->left,k,elements)||lookfor(root->right,k,elements);
    }
};

int main(){}
