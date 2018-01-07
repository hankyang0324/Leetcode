//https://leetcode.com/problems/valid-perfect-square/description/

//Given a positive integer num, write a function which returns True if num is a perfect square else False.

//Note: Do not use any built-in library function such as sqrt.

#include <iostream>

using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        int i=1;
        while(num>0){
            num-=i;
            i+=2;
        }
        return num==0;
    }
};

int main(){}

//perfect squre=1+3+5+7+...
