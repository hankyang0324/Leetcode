//https://leetcode.com/problems/search-for-a-range/description/

//Given an array of integers sorted in ascending order, find the starting and ending position of a given target value.

//Your algorithm's runtime complexity must be in the order of O(log n).

//If the target is not found in the array, return [-1, -1].

//For example,
//Given [5, 7, 7, 8, 8, 10] and target value 8,
//return [3, 4].

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};
        int left=0,right=nums.size()-1,mid=0;
        while(left<right){
            mid=left+(right-left)/2;
            if(nums[mid]<target) left=mid+1;
            else if(nums[mid]>target) right=mid-1;
            else break;
        }
        mid=left+(right-left)/2;
        if(nums[mid]!=target) return {-1,-1};
        else{
            right=left=mid;
            while(left>=0 && nums[left]==target) left--;
            while(right<nums.size() && nums[right]==target) right++;
            return {left+1,right-1};
        }
    }
};

int main(){}
