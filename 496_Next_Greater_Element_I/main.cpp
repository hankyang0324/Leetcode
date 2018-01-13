//https://leetcode.com/problems/next-greater-element-i/description/

//You are given two arrays (without duplicates) nums1 and nums2 where nums1’s elements are subset of nums2. Find all the next greater numbers for nums1's elements in the corresponding places of nums2.

//The Next Greater Number of a number x in nums1 is the first greater number to its right in nums2. If it does not exist, output -1 for this number.

//Example 1:
//Input: nums1 = [4,1,2], nums2 = [1,3,4,2].
//Output: [-1,3,-1]
//Explanation:
//    For number 4 in the first array, you cannot find the next greater number for it in the second array, so output -1.
//    For number 1 in the first array, the next greater number for it in the second array is 3.
//    For number 2 in the first array, there is no next greater number for it in the second array, so output -1.

#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        unordered_map<int,int> greater;
        stack<int> wait;//将等待比较的数存入stack
        vector<int> ans;
        if(nums.size()==0)
            return {};
        for(int i=0;i<nums.size()-1;i++){//遍历nums
            wait.push(nums[i]);//将等待比较的数存入stack，stack中的数必定是由小到大排列的
            while(wait.size()&&wait.top()<nums[i+1]){//找到了greater，推出stack
                greater[wait.top()]=nums[i+1];//greater放入该数对应的map
                wait.pop();
            }
        }
        for(int i=0;i<findNums.size();i++){
            greater[findNums[i]]!=0?ans.push_back(greater[findNums[i]]):ans.push_back(-1);
        }
        return ans;
    }
};

int main(){}

//stack
