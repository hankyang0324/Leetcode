//https://leetcode.com/problems/missing-number/description/

//Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size=nums.size();
        vector<int> nums2(size+1,0);
        for(int i=0;i<size;i++)
            nums2[nums[i]]=1;
        for(int i=0;i<size+1;i++)
            if(nums2[i]==0)
                return i;
        return size;
    }
};

int main(){}
