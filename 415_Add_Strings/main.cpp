//https://leetcode.com/problems/add-strings/description/

//Given two non-negative integers num1 and num2 represented as string, return the sum of num1 and num2.

#include <iostream>

using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans="";
        int carry=0;
        for(int i1=num1.length()-1,i2=num2.length()-1;i1>=0||i2>=0;i1--,i2--){
            int add1=0,add2=0;
            if(i1>=0)
                add1=num1[i1]-'0';
            if(i2>=0)
                add2=num2[i2]-'0';
            int digit=(add1+add2+carry)%10;
            carry=(add1+add2+carry)/10;
            ans=to_string(digit)+ans;
        }
        if(carry==1)
            ans=to_string(1)+ans;
        return ans;
    }
};

int main(){}
