//https://leetcode.com/problems/factorial-trailing-zeroes/description/

//Given an integer n, return the number of trailing zeroes in n!.

//Note: Your solution should be in logarithmic time complexity.

#include <iostream>

using namespace std;

class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0;
        while(n>0){
            n/=5;
            ans+=n;
        }
        return ans;
    }
};

int main(){}

//统计有n中有多少个是5的倍数：n/5
//当n>=25时，n的约数中可能有2个5：n/25
//当n>=125时，。。。
