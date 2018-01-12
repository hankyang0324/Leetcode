//https://leetcode.com/problems/length-of-last-word/description/

//Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

//If the last word does not exist, return 0.

//Note: A word is defined as a character sequence consists of non-space characters only.

#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        s=' '+s+' ';//统一格式，一般化各种情况
        int pos=s.size()-1;
        int count=0;
        while(pos>0){
            if(s[--pos]!=' '){//从结尾找到第一个不是空格的字符位置
                int end=pos;
                while(end>=0){//此后若不是空格，累加长度
                    if(s[end--]!=' ')
                        count++;
                    else
                        return count;
                }
            }
        }
        return count;
    }
};

int main(){}
