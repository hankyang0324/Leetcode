//https://leetcode.com/problems/single-number-ii/description/

//Given an array of integers, every element appears three times except for one, which appears exactly once. Find that single one.

//Note:
//Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> elements;
        for(auto num: nums){
            elements[num]++;
        }
        for(unordered_map<int,int>::iterator it=elements.begin();it!=elements.end();++it){
            if(it->second==1) return it->first;
        }
        return 0;
    }
};

int main(){}
