//https://leetcode.com/problems/valid-parentheses/description/

//Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

//The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        s=' '+s+' ';//避免上来就是)]}的情况
        vector<char> check;
        check.push_back(s[0]);//避免上来就是)]}的情况
        for(int i=1;i<s.size();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                check.push_back(s[i]);
            }
            else{
                if(abs(s[i]-check.back())>2)//对应括号ascii码相减小于等于2
                    return false;
                check.pop_back();
            }
        }
        if(check.empty())
            return true;
        else
            return false;
    }
};

int main(){}

//用stack存({[，遇到对应的pop，不对应false
//最后如果stack为空true，不为空false
//string前后加了两个空格，将第一个空格push入stack，为了避免s上来就是)]}，stack里没有项目无法比较if(abs(s[i]-check.back())>2)
