//https://leetcode.com/problems/house-robber-ii/description/

//After robbing those houses on that street, the thief has found himself a new place for his thievery so that he will not get too much attention. This time, all houses at this place are arranged in a circle. That means the first house is the neighbor of the last one. Meanwhile, the security system for these houses remain the same as for those in the previous street.

//Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money you can rob tonight without alerting the police.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        int rob=0,skip=0;
        for(int i=0;i<nums.size()-1;i++){
            int pre=rob;
            rob=nums[i]+skip;
            skip=max(pre,skip);
        }
        int rob1=max(rob,skip);
        rob=0;
        skip=0;
        for(int i=1;i<nums.size();i++){
            int pre=rob;
            rob=nums[i]+skip;
            skip=max(pre,skip);
        }
        int rob2=max(rob,skip);
        return max(rob1,rob2);
    }
};

int main(){}

//dynamic programming
//198. House Robber
