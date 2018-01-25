//https://leetcode.com/problems/binary-search-tree-iterator/description/

//Implement an iterator over a binary search tree (BST). Your iterator will be initialized with the root node of a BST.

//Calling next() will return the next smallest number in the BST.

//Note: next() and hasNext() should run in average O(1) time and uses O(h) memory, where h is the height of the tree.

#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BSTIterator {
    vector<int> array;
    int i;
    void inorder(TreeNode* root){
        if(!root)
            return;
        inorder(root->left);
        array.push_back(root->val);
        inorder(root->right);
    }
public:
    BSTIterator(TreeNode *root) {
        inorder(root);
        i=-1;
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return i+1<array.size();
    }

    /** @return the next smallest number */
    int next() {
        i++;
        return array[i];
    }
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */

int main(){}
