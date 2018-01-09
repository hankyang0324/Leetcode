//https://leetcode.com/problems/longest-word-in-dictionary/description/

//Given a list of strings words representing an English Dictionary, find the longest word in words that can be built one character at a time by other words in words. If there is more than one possible answer, return the longest word with the smallest lexicographical order.

//If there is no answer, return the empty string.
//Example 1:
//Input:
//words = ["w","wo","wor","worl", "world"]
//Output: "world"
//Explanation:
//The word "world" can be built one character at a time by "w", "wo", "wor", and "worl".

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    string longestWord(vector<string>& words) {
        unordered_set<string> dict;
        for(int i=0;i<words.size();i++)
            dict.insert(words[i]);
        int longest=0;
        string ans="";
        for(int i=0;i<words.size();i++){
            int eliminate=0;
            for(int j=0;j<words[i].length()&&longest<=words[i].length();j++){
                if(!dict.count(words[i].substr(0,j+1))){
                    eliminate=1;
                    break;
                }
            }
            if(eliminate==0){
                if(longest<words[i].length()){
                    longest=words[i].length();
                    ans=words[i];
                }
                else if(longest==words[i].length()){
                    ans=min(ans,words[i]);
                }
            }
        }
        return ans;
    }
};

int main(){}

//1.每个词存入set中
//2.查询每个长度大于等于当前longest的词的所有子词是否在set中
//3.有子词不在的话排除这个词
//4.如果该词长度大于longest，ans取该词
//5.如果该词长度等于longest，ans取顺序靠前的
