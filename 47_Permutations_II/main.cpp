//https://leetcode.com/problems/permutations-ii/description/

//Given a collection of numbers that might contain duplicates, return all possible unique permutations.

//For example,
//[1,1,2] have the following unique permutations:
//[
//  [1,1,2],
//  [1,2,1],
//  [2,1,1]
//]

#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> unique;
        vector<vector<int>> res;
        vector<int> ans;
        premuteUnique(nums,unique,ans);
        for(set<vector<int>>::iterator it=unique.begin();it!=unique.end();++it)
            res.push_back(*it);
        return res;
    }
    void premuteUnique(vector<int>& nums,set<vector<int>>& unique,vector<int>& ans) {
        if(nums.size()==0){
            if(!unique.count(ans)) unique.insert(ans);
            return;
        }
        for(vector<int>::iterator it=nums.begin();it!=nums.end();++it){
            int temp=*it;
            ans.push_back(temp);
            it=nums.erase(it);
            premuteUnique(nums,unique,ans);
            nums.insert(it,temp);
            ans.pop_back();
        }
    }
};

int main(){}
