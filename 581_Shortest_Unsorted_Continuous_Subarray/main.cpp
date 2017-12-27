//https://leetcode.com/problems/shortest-unsorted-continuous-subarray/description/

//Given an integer array, you need to find one continuous subarray that if you only sort this subarray in ascending order, then the whole array will be sorted in ascending order, too.

//You need to find the shortest such subarray and output its length.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int size=nums.size();
        int l=size;
        int r=0;
        for(int i=0;i<size-1;i++){
            for(int j=i+1;j<size;j++){
                if(nums[j]<nums[i]){
                    r=max(r,j);
                    l=min(l,i);
                }
            }
        }
        return r-l<0?0:r-l+1;
    }
};

int main(){}

//TIME LIMIT EXCEEDED!!!
