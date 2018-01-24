//https://leetcode.com/problems/single-number-iii/description/

//Given an array of numbers nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once.

//For example:

//Given nums = [1, 2, 1, 3, 2, 5], return [3, 5].

//Note:
//The order of the result is not important. So in the above example, [5, 3] is also correct.
//Your algorithm should run in linear runtime complexity. Could you implement it using only constant space complexity?

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_set<int> elements;
        for(int i=0;i<nums.size();i++){
            if(elements.count(nums[i])){
                elements.erase(nums[i]);
                continue;
            }
            elements.insert(nums[i]);
        }
        vector<int> ans;
        for(unordered_set<int>::iterator it=elements.begin();it!=elements.end();++it)
            ans.push_back(*it);
    return ans;
    }
};

int main(){}
