//https://leetcode.com/problems/intersection-of-two-arrays-ii/description/

//Given two arrays, write a function to compute their intersection.

//Example:
//Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2, 2].

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> elements;
        vector<int> ans;
        for(int num:nums1)
            elements[num]++;
        for(int num:nums2){
            if(elements.count(num)&&--elements[num]>=0)
                ans.push_back(num);
        }
        return ans;
    }
};

int main(){}

//unordered_map用法
