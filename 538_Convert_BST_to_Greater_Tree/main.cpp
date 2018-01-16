//https://leetcode.com/problems/convert-bst-to-greater-tree/description/

//Given a Binary Search Tree (BST), convert it to a Greater Tree such that every key of the original BST is changed to the original key plus sum of all keys greater than the original key in BST.

//Example:

//Input: The root of a Binary Search Tree like this:
//              5
//            /   \
//           2     13

//Output: The root of a Greater Tree like this:
//             18
//            /   \
//          20     13

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
    int sum=0;
public:
    TreeNode* convertBST(TreeNode* root) {
        if(root!=nullptr){
            convertBST(root->right);
            sum+=root->val;
            root->val=sum;
            convertBST(root->left);
        }
        return root;
    }
};

int main(){}

//从大到小累加，所以：
//recursion
//右边->自己->左边的inorder 去traverse整个树

//右边=右边+下一个右边
//自己=自己+右边
//左边=左边+自己
