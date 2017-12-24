//https://leetcode.com/problems/longest-continuous-increasing-subsequence/description/

//Given an unsorted array of integers, find the length of longest continuous increasing subsequence (subarray).

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int size=nums.size();
        if(size==0)//可能是空集
            return 0;
        int count=1;
        int longest=1;
        for(int i=0;i<size-1;i++){
            if(nums[i]<nums[i+1])
                count++;
            else
                count=1;
            longest=max(longest,count);
        }
        return longest;
    }
};

int main(){}
