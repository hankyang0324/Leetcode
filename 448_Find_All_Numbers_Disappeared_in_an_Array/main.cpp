//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/

//Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

//Find all the elements of [1, n] inclusive that do not appear in this array.

//Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.
#include <iostream>
#include <vector>
using namespace std;

class Solution {//faster
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int size=nums.size();
        for(int i=0;i<size;i++){
            int idx=abs(nums[i])-1;
            if(nums[idx]>0)
                nums[idx]=-nums[idx];
        }
        for(int i=0;i<size;i++){
            if(nums[i]>0)
                ans.push_back(i+1);
        }
        return ans;
    }
};

class Solution2{
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int size=nums.size();
        for(int i=0;i<size;i++){
            if(nums[i]!=nums[nums[i]-1]){// 如果需要换的位置上的值正确的话，就不换了
                swap(nums[i],nums[nums[i]-1]);
                i--;
            }
        }
        for(int i=0;i<size;i++){
            if(nums[i]!=i+1)
                ans.push_back(i+1);
        }
        return ans;
    }
};

int main(){}
//方法1.若该数i在数列中，把对应位置i-1的值改为负数
//取数列中正数对应的项+1放入答案数列中

//方法2.把数i放到对应位置i-1上
//如果位置i-1中存的数不是i，放入答案数列中
