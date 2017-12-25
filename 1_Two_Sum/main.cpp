//https://leetcode.com/problems/two-sum/description/

//Given an array of integers, return indices of the two numbers such that they add up to a specific target.

//You may assume that each input would have exactly one solution, and you may not use the same element twice.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size=nums.size();
        vector<int> temp(nums);
        sort(nums.begin(),nums.end());
        int l=0;
        int r=size-1;
        while(l<r){
            int sum=nums[l]+nums[r];
            if(sum==target)
                break;
            else if(sum<target)
                l++;
            else if(sum>target)
                r--;
        }
        vector<int> ans(2);
        for(int i=0;i<size;i++){
            if(nums[l]==temp[i])
                ans[0]=i;
        }
        for(int i=0;i<size;i++){
            if(nums[r]==temp[i]&&i!=ans[0])//两个值一样的情况，避免序号重复
                ans[1]=i;
        }
        return ans;
    }
};

int main(){}

//留一个未排序的copy保留index信息
//排序，左右逼近找两个值
//对两个值**分别**在copy中进行一次遍历，找index
//由于会有两个值一样的特殊情况，所以注意一定要分别遍历一次
