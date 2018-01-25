//https://leetcode.com/problems/permutations/discuss/

//Given a collection of distinct numbers, return all possible permutations.

//For example,
//[1,2,3] have the following permutations:
//[
//  [1,2,3],
//  [1,3,2],
//  [2,1,3],
//  [2,3,1],
//  [3,1,2],
//  [3,2,1]
//]

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> res;
        permute(nums,res,ans);
        return ans;
    }
    void permute(vector<int> nums,vector<int> res,vector<vector<int>>& ans){
        if(nums.empty()){
            ans.push_back(res);
            return;
        }
        for(vector<int>::iterator it=nums.begin();it!=nums.end();++it){
            res.push_back(*it);
            int temp=*it;
            nums.erase(it);
            permute(nums,res,ans);
            nums.insert(it,temp);
            res.pop_back();
        }
    }
};

int main(){}

//backtracking
