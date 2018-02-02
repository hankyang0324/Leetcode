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
public:
    void flatten(TreeNode* root) {
        TreeNode* prev=nullptr;
        flatten(root,prev);
    }
    void flatten(TreeNode* root,TreeNode*& prev){
        if(!root) return;
        flatten(root->right,prev);
        flatten(root->left,prev);
        root->right=prev;
        root->left=nullptr;
        prev=root;
    }
};

int main(){}

//真特么的想不出来】
