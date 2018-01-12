//https://leetcode.com/problems/range-sum-query-immutable/description/

//Given an integer array nums, find the sum of the elements between indices i and j (i ≤ j), inclusive.

//Example:
//Given nums = [-2, 0, 3, -5, 2, -1]

//sumRange(0, 2) -> 1
//sumRange(2, 5) -> -1
//sumRange(0, 5) -> -3

#include <iostream>
#include <vector>
using namespace std;

class NumArray {
public:
    vector<int> sums;
    NumArray(vector<int> nums) {
        int sum=0;
        sums.push_back(0);//因为inclusive，注意一上来不是nums[0]
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            sums.push_back(sum);
        }
    }
    int sumRange(int i, int j) {
        return sums[j+1]-sums[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */

int main(){}

//求到每一位的和存入数组sums
//第n位到第m位的和就等于sums[m+1]-sums[n];
