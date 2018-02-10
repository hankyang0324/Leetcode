//https://leetcode.com/problems/summary-ranges/description/

//Given a sorted integer array without duplicates, return the summary of its ranges.

//Example 1:
//Input: [0,1,2,4,5,7]
//Output: ["0->2","4->5","7"]
//Example 2:
//Input: [0,2,3,4,6,8,9]
//Output: ["0","2->4","6","8->9"]

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if(nums.size()==0) return res;
        if(nums.size()==1){
            res.push_back(to_string(nums[0]));
            return res;
        }
        int begin=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]!=1){
                if(i-begin==1) res.push_back(to_string(nums[begin]));
                else res.push_back(to_string(nums[begin])+"->"+to_string(nums[i-1]));
                begin=i;
                if(i==nums.size()-1) res.push_back(to_string(nums[i]));
            }
            else if(i==nums.size()-1) res.push_back(to_string(nums[begin])+"->"+to_string(nums[i]));
        }
        return res;
    }
};

int main(){}
