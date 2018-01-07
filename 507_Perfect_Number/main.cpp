//https://leetcode.com/problems/perfect-number/description/

//We define the Perfect Number is a positive integer that is equal to the sum of all its positive divisors except itself.

//Now, given an integer n, write a function that returns true when it is a perfect number and false when it is not.

#include <iostream>

using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num<=1)
            return false;
        int sum=0;
        for(int i=1;i*i<=num;i++){
            if(num%i==0){
                sum+=i;
                if(i*i!=num)
                    sum+=num/i;
            }
        }
        return num==sum-num;
    }
};

int main(){}

//找到i * i<=num的数
//从1开始到i，sum加上使num%i==0的i和num/i
