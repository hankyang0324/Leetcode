//https://leetcode.com/problems/rotate-array/description/

//Rotate an array of n elements to the right by k steps.

//For example, with n = 7 and k = 3, the array [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4].

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size=nums.size();
        vector<int> ans(size);
        for(int i=0;i<size;i++)
            ans[(i+k)%size]=nums[i];
        for(int i=0;i<size;i++)
            nums[i]=ans[i];
    }
};

int main(){}
