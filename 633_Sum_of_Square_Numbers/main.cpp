//https://leetcode.com/problems/sum-of-square-numbers/description/

//Given a non-negative integer c, your task is to decide whether there're two integers a and b such that a2 + b2 = c.

#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long a=0;a*a<=c;a++){//注意这里的long
            double b=sqrt(c-(int)a*a);//和这里的int
            if(b==(int)b)
                return true;
        }
        return false;
    }
};

int main(){}
