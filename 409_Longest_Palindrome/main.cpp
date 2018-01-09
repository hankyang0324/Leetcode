//https://leetcode.com/problems/longest-palindrome/description/

//Given a string which consists of lowercase or uppercase letters, find the length of the longest palindromes that can be built with those letters.

//This is case sensitive, for example "Aa" is not considered a palindrome here.

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> elements;
        for(int i=0;i<s.length();i++)
            elements[s[i]]++;
        int odd=0;
        int sum=0;
        for(unordered_map<char,int>::iterator it=elements.begin();it!=elements.end();++it){
            if(it->second%2==0)
                sum+=it->second;
            else{
                sum+=it->second-1;
                odd=1;
            }
        }
        return sum+odd;
    }
};

int main(){}

//出现偶数次的字符全部加上，
//如果有出现奇数次的字符，加出现的次数减1，完成循环最后再加1
