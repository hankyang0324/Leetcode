//https://leetcode.com/problems/single-number/description/

//Given an array of integers, every element appears twice except for one. Find that single one.

//Note:
//Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?


#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        set<int> everynum;
        int sum1=0;
        for(int i=0;i<nums.size();i++){
            sum1+=nums[i];
            everynum.insert(nums[i]);
        }
        int sum2=0;
        for(set<int>::iterator it=everynum.begin();it!=everynum.end();++it)
            sum2+=*it;
        return 2*sum2-sum1;
    }
};

int main(){}

//2∗(a+b+c)−(a+a+b+b+c)=c
