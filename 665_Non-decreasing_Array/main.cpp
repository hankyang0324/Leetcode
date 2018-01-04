//https://leetcode.com/problems/non-decreasing-array/description/

//Given an array with n integers, your task is to check if it could become non-decreasing by modifying at most 1 element.

//We define an array is non-decreasing if array[i] <= array[i + 1] holds for every i (1 <= i < n).

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int size=nums.size();
        int count=0;
        for(int i=1;i<size;i++){
            if(nums[i]<nums[i-1]){
                count++;
                if(count==2)
                    return false;
                if(i-2<0||nums[i-2]<=nums[i])
                    nums[i-1]=nums[i]; // 1, 3, 2 --> 1, 2, 2
                else
                    nums[i]=nums[i-1]; // 2, 3, 1 --> 2, 3, 3
            }
        }
        return true;
    }
};

int main(){}
