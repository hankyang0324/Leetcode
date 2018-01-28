//https://leetcode.com/problems/combination-sum/description/

//Given a set of candidate numbers (C) (without duplicates) and a target number (T), find all unique combinations in C where the candidate numbers sums to T.

//The same repeated number may be chosen from C unlimited number of times.

//Note:
//All numbers (including target) will be positive integers.
//The solution set must not contain duplicate combinations.
//For example, given candidate set [2, 3, 6, 7] and target 7,

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> res;
        combination(ans,res,candidates,0,target);
        return ans;
    }
    void combination(vector<vector<int>>& ans,vector<int> res,vector<int>& candidates,int pos,int target){
        if(target<0) return;
        if(target==0) {
            ans.push_back(res);
            return;
        }
        for(int i=pos;i<candidates.size();i++){
            int dup=target/candidates[i];//同一个数可以重复的最大次数
            for(int j=1;j<=dup;j++){
                target-=candidates[i];
                res.push_back(candidates[i]);
                combination(ans,res,candidates,i+1,target);
            }
            for(int j=1;j<=dup;j++){
                target+=res.back();
                res.pop_back();
            }
        }
    }
};

int main(){}
