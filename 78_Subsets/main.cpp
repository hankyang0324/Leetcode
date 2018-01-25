//https://leetcode.com/problems/subsets/description/

//Given a set of distinct integers, nums, return all possible subsets (the power set).

//Note: The solution set must not contain duplicate subsets.

//For example,
//If nums = [1,2,3], a solution is:

//[
//  [3],
//  [1],
//  [2],
//  [1,2,3],
//  [1,3],
//  [2,3],
//  [1,2],
//  []
//]

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> res;
        ans.push_back({});
        subset(ans,res,nums,0);
        return ans;
    }
    void subset(vector<vector<int>>& ans,vector<int> res,vector<int>& nums,int begin){
        if(begin==nums.size())
            return;
        for(int i=begin;i<nums.size();i++){
            res.push_back(nums[i]);
            ans.push_back(res);
            subset(ans,res,nums,i+1);
            res.pop_back();
        }
    }
};

int main(){}

//backtracking
