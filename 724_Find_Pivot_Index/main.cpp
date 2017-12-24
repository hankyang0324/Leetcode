//https://leetcode.com/problems/find-pivot-index/description/

//Given an array of integers nums, write a method that returns the "pivot" index of this array.

//We define the pivot index as the index where the sum of the numbers to the left of the index is equal to the sum of the numbers to the right of the index.

//If no such index exists, we should return -1. If there are multiple pivot indexes, you should return the left-most pivot index.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // int l=0;
        // int r=nums.size()-1;
        // if(r<=1)
        //     return -1;
        // int sumL=nums[l],sumR=nums[r];
        // while(l<r-2){
        //     if(sumL<=sumR)
        //         sumL+=nums[++l];
        //     else
        //         sumR+=nums[--r];
        // }
        // if(sumL==sumR)
        //     return l+1;
        // else
        //     return -1;
        // 错的，都是正数才对
        int size=nums.size();
        int sum=0,sum2=0;
        for(int i=0;i<size;i++)
            sum+=nums[i];
        for(int i=0;i<size;i++){
            if(2*sum2==sum-nums[i])
                return i;
            sum2+=nums[i];
        }
        return -1;
    }
};

int main(){}

//左边的和*2=总和-num[pivot]
//左边可以是空的，操他大爷的！
