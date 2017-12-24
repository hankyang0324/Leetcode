//https://leetcode.com/problems/contains-duplicate/description/

//Given an array of integers, find if the array contains any duplicates. Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>dup;
        for(int i=0;i<nums.size();i++){
            dup[nums[i]]++;
            if(dup[nums[i]]>1)
                return true;
        }
        return false;
    }
};

int main(){}
