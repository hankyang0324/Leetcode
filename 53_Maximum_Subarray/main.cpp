//https://leetcode.com/problems/maximum-subarray/description/

//Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

//For example, given the array [-2,1,-3,4,-1,2,1,-5,4],
//the contiguous subarray [4,-1,2,1] has the largest sum = 6.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int subSum=nums[0];
        int largest=nums[0];
        int size=nums.size();
        for(int i=1;i<size;i++){
            if(subSum<=0)
                subSum=nums[i];
            else
                subSum+=nums[i];
            if(largest<subSum)
                largest=subSum;
        }
        return largest;
    }
};

int main(){}

//遍历数组
//用subSum记录当前subArray的和
//subSum小于零，subArray从当前元素开始
//subSum大于零，subSum加上当前元素
//比较subSum和largest大小，大的给largest
