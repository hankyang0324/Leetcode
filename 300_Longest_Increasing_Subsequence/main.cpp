//https://leetcode.com/problems/longest-increasing-subsequence/description/

//Given an unsorted array of integers, find the length of longest increasing subsequence.

//For example,
//Given [10, 9, 2, 5, 3, 7, 101, 18],
//The longest increasing subsequence is [2, 3, 7, 101], therefore the length is 4. Note that there may be more than one LIS combination, it is only necessary for you to return the length.

//Your algorithm should run in O(n2) complexity.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size()<2) return nums.size();
        unordered_map<int,int> lengths;
        lengths[nums[nums.size()-1]]=1;
        int longest=1;
        for(int i=nums.size()-1;i>=0;i--){
            int maximum=1;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]<nums[j]) maximum=max(maximum,lengths[nums[j]]+1);
            }
            lengths[nums[i]]=maximum;
            longest=max(longest,maximum);
        }
        return longest;
    }
};

int main(){}

//dynamic programming
