//https://leetcode.com/problems/word-pattern/description/

//Given a pattern and a string str, find if str follows the same pattern.

//Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in str.

//Examples:
//pattern = "abba", str = "dog cat cat dog" should return true.

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        string p="";
        unordered_map<char,int> elements1;
        int count=0;
        for(int i=0;i<pattern.length();i++){
            if(!elements1.count(pattern[i]))
                elements1[pattern[i]]=++count;
            p+=to_string(elements1[pattern[i]]);
        }
        string s="";
        vector<string> sub=split(str);
        unordered_map<string,int> elements2;
        count=0;
        for(int i=0;i<sub.size();i++){
            if(!elements2.count(sub[i]))
                elements2[sub[i]]=++count;
            s+=to_string(elements2[sub[i]]);
        }
        return p==s;
    }
    vector<string> split(string str){
        int begin=0;
        vector<string> sub;
        for(int i=0;i<=str.length();i++){
            if(str[i]==' '||str[i]=='\0'){
                sub.push_back(str.substr(begin,i-begin));
                begin=i+1;
            }
        }
        return sub;
    }
};

int main(){}

//pattern字符转数字
//str字符串转数字
