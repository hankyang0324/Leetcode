//https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

//Given a sorted array, remove the duplicates in-place such that each element appear only once and return the new length.

//Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size=nums.size();
        if(size==0)
            return 0;
        int i=0;
        for(int j=1;j<size;j++)
            if(nums[j]!=nums[i]){
                i++;
                nums[i]=nums[j];
            }
        return i+1;
    }
};

int main(){}

//骚的一批，不画图根本想不到
