//https://leetcode.com/problems/valid-anagram/description/

//Given two strings s and t, write a function to determine if t is an anagram of s.

//For example,
//s = "anagram", t = "nagaram", return true.
//s = "rat", t = "car", return false.

#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> elements;
        for(int i=0;i<s.length();i++)
            elements[s[i]]++;
        for(int i=0;i<t.length();i++)
            if(elements[t[i]]--==0)
                return false;
        for(unordered_map<char,int>::iterator it=elements.begin();it!=elements.end();++it)
            if(it->second!=0)
                return false;
        return true;
    }
};

int main(){}
