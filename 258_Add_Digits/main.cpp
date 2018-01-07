//https://leetcode.com/problems/add-digits/description/

//Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

//For example:

//Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.

#include <iostream>

using namespace std;

class Solution {
public:
    int addDigits(int num) {
        return 1+(num-1)%9;
    }
};

int main(){}

//公式：dr(num)=1+(num-1)%9
//https://en.wikipedia.org/wiki/Digital_root#Congruence_formula
//原理：被9整除的数各位数之和是9的倍数，重复这个过程和会变成9
