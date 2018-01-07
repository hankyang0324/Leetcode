//https://leetcode.com/problems/sqrtx/description/

//Implement int sqrt(int x).

//Compute and return the square root of x.

//x is guaranteed to be a non-negative integer.

#include <iostream>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        long r=x;
        while(r*r>x)
            r=(r+x/r)/2;
        return r;
    }
};

int main(){}

//Integer Newton
//牛顿迭代法
