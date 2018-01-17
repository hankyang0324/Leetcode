//https://leetcode.com/problems/path-sum-iii/description/

//You are given a binary tree in which each node contains an integer value.

//Find the number of paths that sum to a given value.

//The path does not need to start or end at the root or a leaf, but it must go downwards (traveling only from parent nodes to child nodes).

//The tree has no more than 1,000 nodes and the values are in the range -1,000,000 to 1,000,000.

//Example:

//root = [10,5,-3,3,2,null,11,3,-2,null,1], sum = 8

//      10
//     /  \
//    5   -3
//   / \    \
//  3   2   11
// / \   \
//3  -2   1

//Return 3. The paths that sum to 8 are:

//1.  5 -> 3
//2.  5 -> 2 -> 1
//3. -3 -> 11

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
    int count;
public:
    int pathSum(TreeNode* root, int sum) {
        count=0;
        vector<int> chain;
        path(root,sum,chain);
        return count;
    }
    void path(TreeNode* root, int sum, vector<int> chain){
        if(root==nullptr)
            return;
        chain.push_back(root->val);
        int currentSum=0;
        for(int i=chain.size()-1;i>=0;i--){
            currentSum+=chain[i];
            if(currentSum==sum)
                count++;
        }
        if(root->left)
            path(root->left,sum,chain);
        if(root->right)
            path(root->right,sum,chain);
    }
};

int main(){}
