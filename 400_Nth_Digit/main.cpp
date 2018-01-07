//https://leetcode.com/problems/nth-digit/description/

//Find the nth digit of the infinite integer sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ...

//Note:
//n is positive and will fit within the range of a 32-bit signed integer (n < 231).

#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    int findNthDigit(int n) {
        long multi=9;
        int digits=1;
        while(n>multi*digits){//找出n是几位数（digits）
            n-=multi*digits++;
            multi*=10;
        }
        int after=(n-1)/digits;//after表示是第几个digits位数
        int location=(n-1)%digits;//n所表示的字符是该数的第location位
        int begin=pow(10,digits-1);
        string num=to_string(begin+after);//n所在的那个数
        return num[location]-'0';
    }
};

int main(){}

//1. to calculate how many digits the number has and the beginning of the corresponding digits number such as 10,100,1000.
//2. to find how many numbers after the beginning number.
//3. find the location of digit that we want
