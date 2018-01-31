//https://leetcode.com/problems/sum-root-to-leaf-numbers/description/

//Given a binary tree containing digits from 0-9 only, each root-to-leaf path could represent a number.

//An example is the root-to-leaf path 1->2->3 which represents the number 123.

//Find the total sum of all root-to-leaf numbers.

//For example,

//    1
//   / \
//  2   3
//The root-to-leaf path 1->2 represents the number 12.
//The root-to-leaf path 1->3 represents the number 13.

//Return the sum = 12 + 13 = 25.

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
    int sumNumbers(TreeNode* root) {
        long sum=0;
        sumNumbers(root,"",sum);
        return sum;
    }
    void sumNumbers(TreeNode* root,string str,long& sum){
        if(!root) return;
        if(!root->left && !root->right){
            str+=(char)(root->val+'0');
            sum+=stoi(str);
            return;
        }
        str+=(char)(root->val+'0');
        sumNumbers(root->left,str,sum);
        sumNumbers(root->right,str,sum);
    }
};

int main(){}
