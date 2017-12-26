//https://leetcode.com/problems/contains-duplicate-ii/description/

//Given an array of integers and an integer k, find out whether there are two distinct indices i and j in the array such that nums[i] = nums[j] and the absolute difference between i and j is at most k.

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int size=nums.size();
        map<int,vector<int>> same;
        for(int i=0;i<size;i++)
            same[nums[i]].push_back(i);
        for(map<int,vector<int>>::iterator it=same.begin();it!=same.end();++it)
            for(int i=0;i<it->second.size()-1;i++)
                if(it->second[i+1]-it->second[i]<=k)
                    return true;
        return false;
    }
};

int main(){}

//用map装每个值出现的位置
//注意题目要求！
//true的条件是：
//1.必须要有重复
//2.**存在**重复的数的位置差小于等于k的情况--即重复的数之间的**位置之差的最小值**小于等于k即可--即只要找到**一组相邻重复数的位置差小于k**
