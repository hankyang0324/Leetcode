//https://leetcode.com/problems/reverse-string/description/

//Write a function that takes a string as input and returns the string reversed.

//Example:
//Given s = "hello", return "olleh".

#include <iostream>
using namespace std;

class Solution {
public:
    string reverseString(string s) {
        int l=0,r=s.length()-1;
        while(l<r)
            swap(s[l++],s[r--]);
        return s;
    }
};

int main(){}
