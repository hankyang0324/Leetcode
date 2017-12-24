//https://leetcode.com/problems/maximum-product-of-three-numbers/description/

//Given an integer array, find three numbers whose product is maximum and output the maximum product.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        //sort(nums.begin(),nums.end());//全排列太慢
        int size=nums.size();
        for(int i=0;i<3;i++)//找出最大的三个放在末尾
            for(int j=0;j<size-1-i;j++)
                if(nums[j]>nums[j+1])
                    swap(nums[j],nums[j+1]);
        for(int i=0;i<2;i++)//找出最小的两个放在开头
            for(int j=size-1;j>i;j--)
                if(nums[j]<nums[j-1])
                    swap(nums[j],nums[j-1]);
        int product;
        if(nums[size-1]<0)
            product=nums[size-1]*nums[size-2]*nums[size-3];
        else
            product=max(nums[0]*nums[1],nums[size-2]*nums[size-3])*nums[size-1];
        return product;
    }
};

int main(){}

//需要一个正数两个负数或三个正数
//即升序排序后最右边三个数或最左边两个数和最右边一个数
//即需要比较最左边nums[0]*nums[1]和右边nums[size-2]*nums[size-3]的大小，大的乘以最右边的数nums[size-1]
//然后发现漏考虑了最大数nums[size-1]也小于零的情况
//全负就直接乘最右边三个数

//全排列太慢，分析完上面后只需要升序排最小的两个和最大的三个即可
