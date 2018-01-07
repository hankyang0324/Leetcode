//https://leetcode.com/problems/self-dividing-numbers/description/

//A self-dividing number is a number that is divisible by every digit it contains.

//For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.

//Also, a self-dividing number is not allowed to contain the digit zero.

//Given a lower and upper number bound, output a list of every possible self dividing number, including the bounds if possible.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            int j=i;
            while(j){
                if(j%10==0||i%(j%10)!=0)
                    break;
                j/=10;
            }
            if(j==0)
                ans.push_back(i);
        }
        return ans;
    }
};

int main(){}

//a%10 取最后一位
//a/10 剩下前n-1位
//a/10==0 每一位都被取过了
