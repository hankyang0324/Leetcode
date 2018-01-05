//https://leetcode.com/problems/intersection-of-two-arrays/description/

//Given two arrays, write a function to compute their intersection.

//Example:
//Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2].

//Note:
//Each element in the result must be unique.
//The result can be in any order.

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> elements(nums1.begin(),nums1.end());
        vector<int> ans;
        for(int num:nums2){
            if(elements.count(num))
                ans.push_back(num);
            elements.erase(num);
        }
        return ans;
    }
};

int main(){}

//vector<int> nums1;
//unordered_set<int> elements(nums1.begin(),nums1.end());
//elements.count(1)//是否有1
