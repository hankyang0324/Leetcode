//https://leetcode.com/problems/combinations/description/

//Given two integers n and k, return all possible combinations of k numbers out of 1 ... n.

//For example,
//If n = 4 and k = 2, a solution is:

//[
//  [2,4],
//  [3,4],
//  [2,3],
//  [1,2],
//  [1,3],
//  [1,4],
//]

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> res;
        combine(ans,res,1,n,k);
        return ans;
    }
    void combine(vector<vector<int>>& ans,vector<int> res,int begin,int n,int k){
        if(k==0){
            ans.push_back(res);
            return;
        }
        for(int i=begin;i<=n-k+1;i++){
            res.push_back(i);
            combine(ans,res,i+1,n,k-1);
            res.pop_back();
        }
    }
};

int main(){}

//backtracking
