//https://leetcode.com/problems/binary-tree-paths/description/

//Given a binary tree, return all root-to-leaf paths.

//For example, given the following binary tree:

//   1
// /   \
//2     3
// \
//  5
//All root-to-leaf paths are:

//["1->2->5", "1->3"]

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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(root!=nullptr)
            paths(root,ans,to_string(root->val));
        return ans;
    }
    void paths(TreeNode* root,vector<string>& ans,string s){
        if(root->left==nullptr&&root->right==nullptr)
            ans.push_back(s);
        if(root->left)
            paths(root->left,ans,s+"->"+to_string(root->left->val));
        if(root->right)
            paths(root->right,ans,s+"->"+to_string(root->right->val));
    }
};

int main(){}

//想不粗乃！！
