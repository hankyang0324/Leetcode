//https://leetcode.com/problems/search-insert-position/discuss/

//Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

//You may assume no duplicates in the array.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        while(r>=l){
            int mid=(l+r)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                r=mid-1;
            else
                l=mid+1;
        }
        return l;
    }
};

int main(){}

//二分法 r>=l; r=mid-1; l=mid+1; return l; 很关键！包括所有特殊情况。
