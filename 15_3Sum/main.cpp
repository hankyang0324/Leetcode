//https://leetcode.com/problems/3sum/description/

//Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

//Note: The solution set must not contain duplicate triplets.

//For example, given array S = [-1, 0, 1, 2, -1, -4],

//A solution set is:
//[
//  [-1, 0, 1],
//  [-1, -1, 2]
//]

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<(int)nums.size()-2;i++){
            int target=-nums[i];
            int l=i+1,r=nums.size()-1;
            while(l<r){
                if(nums[l]+nums[r]<target) l++;
                else if(nums[l]+nums[r]>target) r--;
                else{
                    vector<int> triplet={nums[i],nums[l],nums[r]};
                    ans.push_back(triplet);
                    while(l<r && nums[l]==triplet[1]) l++;
                    while(l<r && nums[r]==triplet[2]) r--;
                }
            }
            while(i+1<nums.size() && nums[i]==nums[i+1]) i++;
        }
        return ans;
    }
};

int main(){}
