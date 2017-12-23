//https://leetcode.com/problems/majority-element/description/

//Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

//You may assume that the array is non-empty and the majority element always exist in the array.
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {//faster
public:
    int majorityElement(vector<int>& nums) {
         map<int,int> num;
         int size=nums.size();
         for(int i=0;i<size;i++){
             num[nums[i]]++;
             if(num[nums[i]]>size/2)
                 return nums[i];
         }
         return 0;
    }
};

class Solution2 {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};

int main(){}

//map的用法
//map<int,int>的第二个int初始值一定是0

//法2：直接排序取中间一位
