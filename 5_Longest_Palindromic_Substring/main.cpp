//https://leetcode.com/problems/longest-palindromic-substring/description/

//Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.

//Example:

//Input: "babad"

//Output: "bab"

//Note: "aba" is also a valid answer.
//Example:

//Input: "cbbd"

//Output: "bb"

#include <iostream>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int begin=0,longest=1;
        for(int i=0;i<s.size();i++){
            int longer=max(lengthofPalindrome(s,i,i),lengthofPalindrome(s,i,i+1));
            if(longer>longest){
                longest=longer;
                begin=i-(longer-1)/2;
            }
        }
        return s.substr(begin,longest);
    }
    int lengthofPalindrome(string& s,int l,int r){
        while(l>=0 && r<s.size() && s[l]==s[r]){
            l--;
            r++;
        }
        return r-l-1;
    }
};

int main(){}
