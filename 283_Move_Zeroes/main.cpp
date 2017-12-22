//Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

//For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int size0=nums.size();
         nums.erase(remove(nums.begin(),nums.end(),0),nums.end());
         int size1=nums.size();
         for(int i=0;i<size0-size1;i++)
             nums.push_back(0);
    }
};

class Solution2 {
public:
    void moveZeroes(vector<int>& nums) {
        int size0=nums.size();
        for(vector<int>::iterator it=nums.begin();it!=nums.end();){
            if(*it==0)
                it=nums.erase(it);
            else
                ++it;
        }
        int size1=nums.size();
        for(int i=0;i<size0-size1;i++)
            nums.push_back(0);
    }
};

int main(){}

//删除vector中的指定元素0：
//1. nums.erase(remove(nums.begin(),nums.end(),0),nums.end());
//2. for(vector<int>::iterator it=nums.begin();it!=nums.end();){
//            if(*it==0)
//                it=nums.erase(it);
//            else
//                ++it;
//        }
