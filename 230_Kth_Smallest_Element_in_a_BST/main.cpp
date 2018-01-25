//https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/Given a binary search tree, write a function kthSmallest to find the kth smallest element in it.

//Note:
//You may assume k is always valid, 1 ≤ k ≤ BST's total elements.

//Follow up:
//What if the BST is modified (insert/delete operations) often and you need to find the kth smallest frequently? How would you optimize the kthSmallest routine?

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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> array;
        inorder(root,k,array);
        return array.back();
    }
    void inorder(TreeNode* root,int k,vector<int>& array){
        if(!root)
            return;
        inorder(root->left,k,array);
        if(array.size()<k)
            array.push_back(root->val);
        inorder(root->right,k,array);
    }
};

int main(){}
