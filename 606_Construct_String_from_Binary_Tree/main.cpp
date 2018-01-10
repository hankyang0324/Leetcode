//https://leetcode.com/problems/construct-string-from-binary-tree/description/

//You need to construct a string consists of parenthesis and integers from a binary tree with the preorder traversing way.

//The null node needs to be represented by empty parenthesis pair "()". And you need to omit all the empty parenthesis pairs that don't affect the one-to-one mapping relationship between the string and the original binary tree.

//Example 1:
//Input: Binary tree: [1,2,3,4]
//       1
//     /   \
//    2     3
//   /
//  4

//Output: "1(2(4))(3)"

//Explanation: Originallay it needs to be "1(2(4)())(3()())",
//but you need to omit all the unnecessary empty parenthesis pairs.
//And it will be "1(2(4))(3)".

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
    string tree2str(TreeNode* t) {
        if(t==nullptr)
            return "";
        if(t->left==nullptr&&t->right==nullptr)
            return to_string(t->val);
        if(t->right==nullptr)
            return to_string(t->val)+"("+tree2str(t->left)+")";
        return to_string(t->val)+"("+tree2str(t->left)+")("+tree2str(t->right)+")";
    }
};

int main(){}

//recursion
//四种情况优先级递减
//1.自身为空
//2.左右都为空
//3.右侧为空（即右侧空，但左侧不为空）
//4.其余（即右侧不为空，这个基础上无论左侧是否为空都要输出，所以不用单独讨论左侧为空）
