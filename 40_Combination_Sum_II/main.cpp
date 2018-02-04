//https://leetcode.com/problems/combination-sum-ii/description/

//Given a collection of candidate numbers (C) and a target number (T), find all unique combinations in C where the candidate numbers sums to T.

//Each number in C may only be used once in the combination.

//Note:
//All numbers (including target) will be positive integers.
//The solution set must not contain duplicate combinations.
//For example, given candidate set [10, 1, 2, 7, 6, 1, 5] and target 8,
//A solution set is:
//[
//  [1, 7],
//  [1, 2, 5],
//  [2, 6],
//  [1, 1, 6]
//]

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> combo;
        vector<int> res;
        sort(candidates.begin(),candidates.end());
        combination(candidates,combo,res,0,target);
        return combo;
    }
    void combination(vector<int>& candidates,vector<vector<int>>& combo,vector<int> res,int begin,int target){
        if(target==0){
            combo.push_back(res);
            return;
        }
        if(target<0) return;
        for(int i=begin;i<candidates.size();i++){
            res.push_back(candidates[i]);
            combination(candidates,combo,res,i+1,target-candidates[i]);
            while(i+1<candidates.size() && candidates[i]==candidates[i+1]) i++; //避免该位重复
            res.pop_back();
        }
    }
};

int main(){}
