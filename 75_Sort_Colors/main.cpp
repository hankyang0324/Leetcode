//https://leetcode.com/problems/sort-colors/description/

//Given an array with n objects colored red, white or blue, sort them so that objects of the same color are adjacent, with the colors in the order red, white and blue.

//Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int> colors;
        for(auto num:nums){
            colors[num]++;
        }
        int i=0;
        for(;i<colors[0];i++){
            nums[i]=0;
        }
        for(;i<colors[0]+colors[1];i++){
            nums[i]=1;
        }
        for(;i<colors[0]+colors[1]+colors[2];i++){
            nums[i]=2;
        }
    }
};

int main(){}
