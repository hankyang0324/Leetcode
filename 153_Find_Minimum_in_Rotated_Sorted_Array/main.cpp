//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

//Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

//(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

//Find the minimum element.

//You may assume no duplicate exists in the array.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1])
                swap(nums[i],nums[i+1]);
        }
        return nums[nums.size()-1];
    }
};

int main(){}
