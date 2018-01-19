//https://leetcode.com/problems/longest-univalue-path/description/

//Given a binary tree, find the length of the longest path where each node in the path has the same value. This path may or may not pass through the root.

//Note: The length of path between two nodes is represented by the number of edges between them.

//Example 1:

//Input:

//              5
//             / \
//            4   5
//           / \   \
//          1   1   5
//Output:

//2
//Example 2:

//Input:

//              1
//             / \
//            4   5
//           / \   \
//          4   4   5
//Output:

//2

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
    int longestDepth(TreeNode* root){
        if(root==nullptr)
            return 0;
        int left=longestDepth(root->left);
        int right=longestDepth(root->right);
        int sameleft=0,sameright=0;
        if(root->left!=nullptr && root->left->val==root->val)
            sameleft=left+1;
        if(root->right!=nullptr && root->right->val==root->val)
            sameright=right+1;
        ans=max(ans,sameleft+sameright);
        return max(sameleft,sameright);
    }
    int longestUnivaluePath(TreeNode* root) {
        ans=0;
        longestDepth(root);
        return ans;
    }
};

int main(){}
