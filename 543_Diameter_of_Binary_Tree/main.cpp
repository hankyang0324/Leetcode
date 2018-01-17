//https://leetcode.com/problems/diameter-of-binary-tree/description/

//Given a binary tree, you need to compute the length of the diameter of the tree. The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

//Example:
//Given a binary tree
//          1
//         / \
//        2   3
//       / \
//      4   5
//Return 3, which is the length of the path [4,2,1,3] or [5,2,1,3].

//Note: The length of path between two nodes is represented by the number of edges between them.

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
    int ans;
public:
    int diameterOfBinaryTree(TreeNode* root) {
        ans=1;
        depth(root);
        return ans-1;
    }
    int depth(TreeNode* root){
        if(root==nullptr)
            return 0;
        int L=depth(root->left);
        int R=depth(root->right);
        ans=max(ans,L+R+1);
        return max(L,R)+1;
    }
};

int main(){}

//recursion
