//https://leetcode.com/problems/k-diff-pairs-in-an-array/description/

//Given an array of integers and an integer k, you need to find the number of unique k-diff pairs in the array. Here a k-diff pair is defined as an integer pair (i, j), where i and j are both numbers in the array and their absolute difference is k.

//Note:
//The pairs (i, j) and (j, i) count as the same pair.
//The length of the array won't exceed 10,000.
//All the integers in the given input belong to the range: [-1e7, 1e7].

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        int count=0;
        for(int i=0;i<size-1;i++){
            for(int j=i+1;j<size;j++){
                if(nums[j]-nums[i]==k){
                    count++;
                    break;
                }
                else if(nums[j]-nums[i]>k){
                    break;
                }
            }
            while(nums[i+1]==nums[i]){
                i++;
            }
        }
        return count;
    }
};

int main(){}

//先排序
//双循环，第二个循环减第一个循环看是否等于k
//遇到重复的数往后跳
