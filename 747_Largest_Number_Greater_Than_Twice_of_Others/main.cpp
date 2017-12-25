//https://leetcode.com/problems/largest-number-greater-than-twice-of-others/description/

//In a given integer array nums, there is always exactly one largest element.

//Find whether the largest element in the array is at least twice as much as every other number in the array.

//If it is, return the index of the largest element, otherwise return -1.

//nums will have a length in the range [1, 50].
//Every nums[i] will be an integer in the range [0, 99].

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int size=nums.size();
        if(size<2)
            return -1;
        int position[2]={size-1,size-1};
        for(int i=0;i<2;i++)
            for(int j=size-1;j>i;j--){
                if(nums[j]>nums[j-1])
                    swap(nums[j],nums[j-1]);
                else
                    position[i]=j-1;
            }
        if(nums[0]==0)
            return -1;
        else if(nums[1]==0)
            return position[0];
        else if(nums[0]/nums[1]>=2)
            return position[0];
        else
            return -1;
    }
};

int main(){}

//从后向前遍历，把最大的项移到第一个
//如果当前项比前一项小，前一项的项号存入最大项项号
//遍历完成后可得到最大项原本的项号
