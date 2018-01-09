//https://leetcode.com/problems/first-unique-character-in-a-string/description/

//Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> elements;
        for(int i=0;i<s.length();i++)
            elements[s[i]]++;
        for(int i=0;i<s.length();i++)
            if(elements[s[i]]==1)
                return i;
        return -1;
    }
};

int main(){}
