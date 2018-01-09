//https://leetcode.com/problems/reverse-integer/description/

//Given a 32-bit signed integer, reverse digits of an integer.

#include <iostream>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        if(x==0||x==-2147483648)//这个不知道为什么
            return 0;
        int xp=abs(x);
        long positive=xp/x;
        string a="";
        while(xp>0){
            a=a+to_string(xp%10);
            xp/=10;
        }
        long ans=stol(a);//不能用stoi，reverse后可能会从int变成long
        if(ans>2147483647)//超出int范围
            return 0;
        return ans*positive;
    }
};

int main(){}
