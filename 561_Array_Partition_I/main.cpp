//https://leetcode.com/problems/array-partition-i/description/

//Given an array of 2n integers, your task is to group these integers into n pairs of integer, say (a1, b1), (a2, b2), ..., (an, bn) which makes sum of min(ai, bi) for all i from 1 to n as large as possible.
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int getMin(int a,int b){
        if(a<=b)
            return a;
        else
            return b;
    }
    int arrayPairSum(vector<int>& nums) {
        int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<(int)nums.size();i+=2)
            sum+=getMin(nums[i],nums[i+1]);
        return sum;
    }
};

int main(){}

//不要忘了return啊啊啊
//(int)nums.size();
//sort(nums.begin(),nums.end()); 升序排列
