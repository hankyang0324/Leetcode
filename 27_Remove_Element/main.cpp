//https://leetcode.com/problems/remove-element/description/

//Given an array and a value, remove all instances of that value in-place and return the new length.

//Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

//The order of elements can be changed. It doesn't matter what you leave beyond the new length.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size=nums.size();
        int length=0;
        for(int i=0;i<size;i++)
            if(nums[i]!=val)
                nums[length++]=nums[i];
        return length;
    }
};

int main(){}
