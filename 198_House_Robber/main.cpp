//https://leetcode.com/problems/house-robber/description/

//You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

//Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money you can rob tonight without alerting the police.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int rob=0;
        int skip=0;
        for (int i=0;i<nums.size();i++){
            int pre_rob=rob;
            rob=nums[i]+skip;
            skip=max(pre_rob,skip);
        }
        return max(rob,skip);
    }
};

int main(){}

//For every house i, there are two options: either to rob it (include this house: rob) or not rob it (exclude this house: skip).
//Include this house:
//rob = num[i] + skip (money of this house + money robbed excluding the previous house)
//Exclude this house:
//skip = max(pre_rob, skip) (max of money robbed including the previous house or money robbed excluding the previous house)robbed excluding the previous house)
