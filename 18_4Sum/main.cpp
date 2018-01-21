//https://leetcode.com/problems/4sum/description/

//Given an array S of n integers, are there elements a, b, c, and d in S such that a + b + c + d = target? Find all unique quadruplets in the array which gives the sum of target.

//Note: The solution set must not contain duplicate quadruplets.

//For example, given array S = [1, 0, -1, 0, -2, 2], and target = 0.

//A solution set is:
//[
//  [-1,  0, 0, 1],
//  [-2, -1, 1, 2],
//  [-2,  0, 0, 2]
//]

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        if(nums.size()<4)
            return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int l=j+1,r=nums.size()-1;
                while(l<r){
                    int sum=nums[i]+nums[j]+nums[l]+nums[r];
                    if(sum<target) l++;
                    else if(sum>target) r--;
                    else{
                        vector<int> temp={nums[i],nums[j],nums[l],nums[r]};
                        ans.push_back(temp);
                        while(l<r && nums[l]==temp[2]) l++;
                        while(l<r && nums[r]==temp[3]) r--;
                    }
                }
                while(j+1<nums.size() && nums[j+1]==nums[j]) j++;
            }
            while(i+1<nums.size() && nums[i+1]==nums[i]) i++;
        }
        return ans;
    }
};

int main(){}
