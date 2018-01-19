//https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

//Given a string, find the length of the longest substring without repeating characters.

//Examples:

//Given "abcabcbb", the answer is "abc", which the length is 3.

//Given "bbbbb", the answer is "b", with the length of 1.

//Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.

#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size=s.size();
        int i=0;
        int longest=0;
        while(i<size){
            int count=0;
            unordered_map<char,int> elements;
            for(int j=i;j<size;j++){
                if(elements.count(s[j])){
                    i=elements[s[j]];
                    break;
                }
                elements[s[j]]=j;
                count++;
            }
            i++;
            longest=max(longest,count);
            if(longest>=size-i)
                break;
        }
        return longest;
    }
};

int main(){}
