//https://leetcode.com/problems/reverse-string-ii/description/

//Given a string and an integer k, you need to reverse the first k characters for every 2k characters counting from the start of the string. If there are less than k characters left, reverse all of them. If there are less than 2k but greater than or equal to k characters, then reverse the first k characters and left the other as original.
//Example:
//Input: s = "abcdefg", k = 2
//Output: "bacdfeg"

#include <iostream>

using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i=0;i<s.size();i+=2*k){
            int l=i,r=min((int)s.size()-1,i+k-1);
            while(l<r){
                swap(s[l++],s[r--]);
            }
        }
        return s;
    }
};

int main(){}
