//https://leetcode.com/problems/longest-harmonious-subsequence/description/

//We define a harmonious array is an array where the difference between its maximum value and its minimum value is exactly 1.

//Now, given an integer array, you need to find the length of its longest harmonious subsequence among all its possible subsequences.

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>elements;
        for(int num:nums)
            elements[num]++;
        int longest=0;
        for(auto& e:elements){
            if(elements.count(e.first-1))
                longest=max(longest,elements[e.first]+elements[e.first-1]);
        }
        return longest;
    }
};

int main(){}

//1.用map统计出每个元素出现的次数
//2.遍历map，找出元素n与元素n-1（如果存在的话）出现次数之和
//3.找出最大和
