//https://leetcode.com/problems/maximum-average-subarray-i/description/

//Given an array consisting of n integers, find the contiguous subarray of given length k that has the maximum average value. And you need to output the maximum average value.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int size=nums.size();
        int largest=0;
        if(size<=k){
            for(int i=0;i<size;i++)
                largest+=nums[i];
            return largest/(double)size;
        }
        int sum=0;
        for(int i=0;i<k;i++)
            sum+=nums[i];
        largest=sum;
        for(int i=0;i<size-k;i++){
            sum=sum-nums[i]+nums[i+k];
            largest=max(largest,sum);
        }
        return largest/(double)k;
    }
};

int main(){}
