//https://leetcode.com/problems/power-of-two/description/

//Given an integer, write a function to determine if it is a power of two.

#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return fmod(log10(n)/log10(2),1)==0;
    }
};

int main(){}

//fmod用法
//log10以10为底
//log以e为底数
