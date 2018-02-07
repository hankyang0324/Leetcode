//https://leetcode.com/problems/shortest-unsorted-continuous-subarray/description/

//Given an integer array, you need to find one continuous subarray that if you only sort this subarray in ascending order, then the whole array will be sorted in ascending order, too.

//You need to find the shortest such subarray and output its length.

//Example 1:
//Input: [2, 6, 4, 8, 10, 9, 15]
//Output: 5
//Explanation: You need to sort [6, 4, 8, 10, 9] in ascending order to make the whole array sorted in ascending order.
//Note:
//Then length of the input array is in range [1, 10,000].
//The input array may contain duplicates, so ascending order here means <=.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> copy=nums;
        sort(nums.begin(),nums.end());
        int begin=1,end=0;
        for(int i=0;i<nums.size();i++){
            if(copy[i]!=nums[i]){
                begin=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(copy[i]!=nums[i]){
                end=i;
                break;
            }
        }
        return end-begin+1;
    }
};

int main(){}
