//https://leetcode.com/problems/find-mode-in-binary-search-tree/description/

//Given a binary search tree (BST) with duplicates, find all the mode(s) (the most frequently occurred element) in the given BST.

//Assume a BST is defined as follows:

//The left subtree of a node contains only nodes with keys less than or equal to the node's key.
//The right subtree of a node contains only nodes with keys greater than or equal to the node's key.
//Both the left and right subtrees must also be binary search trees.
//For example:
//Given BST [1,null,2,2],
//   1
//    \
//     2
//    /
//   2
//return [2].

#include <iostream>
#include <vector>
#include <unordered_map>
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
    void find(TreeNode* root,unordered_map<int,int>& elements){
        if(root==nullptr)
            return;
        elements[root->val]++;
        find(root->left,elements);
        find(root->right,elements);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        if(root==nullptr)
            return ans;
        unordered_map<int,int> elements;
        find(root,elements);
        int maximum=0;
        for(unordered_map<int,int>::iterator it=elements.begin();it!=elements.end();++it){
            if(maximum<it->second){
                maximum=it->second;
                ans.clear();
            }
            if(maximum==it->second)
                ans.push_back(it->first);
        }
        return ans;
    }
};

int main(){}

//traverse tree，map里装每个数出现的次数
//traverse map，vector里装map里出现次数最多的数
