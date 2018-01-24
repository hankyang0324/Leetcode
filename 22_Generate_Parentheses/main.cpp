//https://leetcode.com/problems/generate-parentheses/description/

//Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

//For example, given n = 3, a solution set is:

//[
//  "((()))",
//  "(()())",
//  "(())()",
//  "()(())",
//  "()()()"
//]

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        backtrack(ans,"",0,0,n);
        return ans;
    }
    void backtrack(vector<string>& ans, string cur, int open, int close, int max){
        if(cur.size()==max*2){
            ans.push_back(cur);
            return;
        }
        if(open<max) backtrack(ans,cur+"(",open+1,close,max);
        if(close<open) backtrack(ans,cur+")",open,close+1,max);
    }
};

int main(){}

//backtracking
