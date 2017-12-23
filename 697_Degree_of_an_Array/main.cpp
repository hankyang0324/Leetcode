//https://leetcode.com/problems/degree-of-an-array/description/

//Given a non-empty array of non-negative integers nums, the degree of this array is defined as the maximum frequency of any one of its elements.

//Your task is to find the smallest possible length of a (contiguous) subarray of nums, that has the same degree as nums.
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int size=nums.size();
        map<int,vector<int>> info;//数值，该数值出现的位置的数组
        for(int i=0;i<size;i++)
            info[nums[i]].push_back(i);
        int degree=0;
        for(map<int,vector<int>>::iterator it=info.begin();it!=info.end();++it)
            degree=max(degree,(int)(it->second.size()));
        int shortest=size;
        for(map<int,vector<int>>::iterator it=info.begin();it!=info.end();++it)
            if(it->second.size()==degree)
                shortest=min(shortest,it->second.back()-it->second.front()+1);
        return shortest;
    }
};

int main(){}

//1. 创建map<数值，该数值出现位置1. 创建map<数值，该数值出现位置mu的数组>
//2. 遍历nums数组对map赋值
//3. 遍历map，通过数值出现位置的数组的长度找出最长的数组，长度=degree
//4. 遍历map，对于长度=degree的数组，用数组最后一项减第一项然后加1，值最小的是shortest subarray的长度

//iterator it遍历map时，map的key项：it->first；value项：it->second
