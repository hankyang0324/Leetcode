//https://leetcode.com/problems/product-of-array-except-self/description/

//Given an array of n integers where n > 1, nums, return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].

//Solve it without division and in O(n).

//For example, given [1,2,3,4], return [24,12,8,6].

//Follow up:
//Could you solve it with constant space complexity? (Note: The output array does not count as extra space for the purpose of space complexity analysis.)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        long product=1;
        int count0=0;
        for(auto num:nums){
            if(num==0){
                count0++;
                continue;
            }
            product*=num;
        }
        if(count0>=2) return ans;
        if(count0==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    ans[i]=product;
                    return ans;
                }
            }
        }
        for(int i=0;i<nums.size();i++){
            ans[i]=product/nums[i];
        }
        return ans;
    }
};

int main(){}
