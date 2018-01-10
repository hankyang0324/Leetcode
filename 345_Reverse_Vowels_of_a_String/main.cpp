//https://leetcode.com/problems/reverse-vowels-of-a-string/description/

//Write a function that takes a string as input and reverse only the vowels of a string.

//Example 1:
//Given s = "hello", return "holle".

//Example 2:
//Given s = "leetcode", return "leotcede".

#include <iostream>
#include <set>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        set<char> vowels={'a','e','i','o','u','A','E','I','O','U'};
        int l=0,r=s.length()-1;
        while(l<r){
            while(!vowels.count(s[l])&&l<r)
                l++;
            while(!vowels.count(s[r])&&l<r)
                r--;
            swap(s[l++],s[r--]);
        }
        return s;
    }
};

int main(){}
