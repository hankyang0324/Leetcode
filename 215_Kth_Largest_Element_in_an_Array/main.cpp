//https://leetcode.com/problems/kth-largest-element-in-an-array/description/

//Find the kth largest element in an unsorted array. Note that it is the kth largest element in the sorted order, not the kth distinct element.
//For example,
//Given [3,2,1,5,6,4] and k = 2, return 5.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()-k];
    }
};

int main(){}
