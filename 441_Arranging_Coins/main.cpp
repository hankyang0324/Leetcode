//https://leetcode.com/problems/arranging-coins/description/

//You have a total of n coins that you want to form in a staircase shape, where every k-th row must have exactly k coins.

//Given n, find the total number of full staircase rows that can be formed.

//n is a non-negative integer and fits within the range of a 32-bit signed integer.

#include <iostream>

using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        int count=0;
        long sum=0;//sum会超过n，用long
        while(sum<=n){
            sum+=++count;
        }
        return count-1;
    }
};

int main(){}
