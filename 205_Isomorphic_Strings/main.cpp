//https://leetcode.com/problems/isomorphic-strings/description/

//Given two strings s and t, determine if they are isomorphic.

//Two strings are isomorphic if the characters in s can be replaced to get t.

//All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself.

//For example,
//Given "egg", "add", return true.

//Given "foo", "bar", return false.

//Given "paper", "title", return true.

#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int> elements1,elements2;
        string s1="",t1="";
        for(int i=0,pos=0;i<s.length();i++){
            if(!elements1.count(s[i]))
                elements1[s[i]]=++pos;
            s1+=to_string(elements1[s[i]]);
        }
        for(int i=0,pos=0;i<t.length();i++){
            if(!elements2.count(t[i]))
                elements2[t[i]]=++pos;
            t1+=to_string(elements2[t[i]]);
        }
        return s1==t1;
    }
};

int main(){}

//用map存每个字母第一次出现的次序
//例如：把egg，add转换为122
//foo，bar转换为122，123
//paper，title转换为12134
