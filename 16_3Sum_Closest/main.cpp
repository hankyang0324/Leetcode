//https://leetcode.com/problems/3sum-closest/description/

//Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target. Return the sum of the three integers. You may assume that each input would have exactly one solution.

//    For example, given array S = {-1 2 1 -4}, and target = 1.

//    The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size()<3) return 0;
        sort(nums.begin(),nums.end());
        int closet=nums[0]+nums[1]+nums[2];
        for(int i=0;i<(int)nums.size()-2;i++){
            int l=i+1,r=nums.size()-1;
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if(sum==target) return sum;
                if(abs(sum-target)<abs(closet-target)) closet=sum;
                if(sum>target) r--;
                else l++;
            }
        }
        return closet;
    }
};

int main(){}
