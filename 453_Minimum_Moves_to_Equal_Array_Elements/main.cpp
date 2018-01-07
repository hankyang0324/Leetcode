//https://leetcode.com/problems/minimum-moves-to-equal-array-elements/description/

//Given a non-empty integer array of size n, find the minimum number of moves required to make all array elements equal, where a move is incrementing n - 1 elements by 1.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums) {
        for(int i=nums.size()-1;i>=1;i--)
            if(nums[i]<nums[i-1])
                swap(nums[i],nums[i-1]);
        int min=0;
        for(int i=1;i<nums.size();i++)
            min+=nums[i]-nums[0];
        return min;
    }
};

int main(){}

//每次n-1个元素+1等效于1个元素-1
//等效于
//找到最小的元素
//其余元素减去最小元素
//求和
