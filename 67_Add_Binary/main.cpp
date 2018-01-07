//https://leetcode.com/problems/add-binary/description/

//Given two binary strings, return their sum (also a binary string).

//For example,
//a = "11"
//b = "1"
//Return "100".

#include <iostream>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0;
        string ans="";
        for(int i=a.length()-1,j=b.length()-1;i>=0||j>=0;i--,j--){
            int ai=0,bj=0;
            if(i>=0)
                ai=a[i]-'0';
            if(j>=0)
                bj=b[j]-'0';
            ans=(char)((ai+bj+carry)%2+'0')+ans;//(ai+bj+carry)%2得到该位数字
            carry=(ai+bj+carry)/2;//(ai+bj+carry)/2得到该位进位
        }
        if(carry==1)
            ans=(char)(carry+'0')+ans;
        return ans;
    }
};

int main(){}
