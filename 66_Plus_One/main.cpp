//https://leetcode.com/problems/plus-one/description/

//Given a non-negative integer represented as a non-empty array of digits, plus one to the integer.

//You may assume the integer do not contain any leading zero, except the number 0 itself.

//The digits are stored such that the most significant digit is at the head of the list.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size=digits.size();
        for(int i=size-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                break;
            }
            else
                digits[i]=0;
        }
    if(digits[0]==0){
        vector<int>::iterator it=digits.begin();
        digits.insert(it,1);
    }
    return digits;
    }
};

int main(){}

//vector<int>::iterator it=digits.begin();
//digits.insert(it,1);
//在vector开头插入一个值的方法
