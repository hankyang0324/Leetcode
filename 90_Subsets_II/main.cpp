//https://leetcode.com/problems/subsets-ii/description/

//Given a collection of integers that might contain duplicates, nums, return all possible subsets (the power set).

//Note: The solution set must not contain duplicate subsets.

//For example,
//If nums = [1,2,2], a solution is:

//[
//  [2],
//  [1],
//  [1,2,2],
//  [2,2],
//  [1,2],
//  []
//]

#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> elements;
        vector<vector<int>> ans={{}};
        vector<int> res;
        subsetsWithDup(nums,elements,ans,res,0);
        return ans;
    }
    void subsetsWithDup(vector<int>& nums,set<vector<int>>& elements,vector<vector<int>>& ans,vector<int> res,int i){
        if(i==nums.size()) return;
        for(;i<nums.size();i++){
            res.push_back(nums[i]);
            if(!elements.count(res)){
                elements.insert(res);
                ans.push_back(res);
            }
            subsetsWithDup(nums,elements,ans,res,i+1);
            res.pop_back();
        }
    }
};

int main(){}

//backtracking
